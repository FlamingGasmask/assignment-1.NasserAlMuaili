import rclpy
from rclpy.node import Node
from time import perf_counter
from naal3202_service.srv import Naal3202Service
from std_msgs.msg import String
import csv
import numpy as np
import matplotlib.pyplot as plt

class TextReverse(Node):
    def __init__(self):
        super().__init__('text_reverse_client')
        self.cli = self.create_client(Naal3202Service, 'reverse')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service unavailable, please wait.')

    #almost called this function 400 boys, in reference to the short film 400 boys from 'Love Death + Robots'
    #anytime i hear or remember the number 400 i remember that short film, really good film, recommend you check
    #it out if you havent
    def Caller(self, InputText):
        ##########################################################
        ###########Code block for processing and timer############
        ##########################################################
        ask          = Naal3202Service.Request()
        ask.text     = String(data=str(InputText))

        TimerStart   = perf_counter()
        future       = self.cli.call_async(ask)
        while rclpy.ok() and not future.done():
            rclpy.spin_once(self, timeout_sec=.1)
        if future.exception():
            self.get_logger().error(f"service call failed: {future.exception()}")
            return None
        TimerEnd     = perf_counter()
        ##########################################################
        ###########Code block for processing and timer############
        ##########################################################

        ##########################################################
        ##################Code block for outputs##################
        ##########################################################
        recieve      = future.result()
        TotalTime    = TimerEnd - TimerStart
        TotalLatency = TotalTime - recieve.time

        self.get_logger().info(
            f"Input: '{InputText}'  Reversed Input: '{recieve.reverse}'  "
            f"Run Time: {recieve.time:.6f}s  Function Time: {TotalTime:.6f}s  Total Latancy: {TotalLatency:.6f}s"
        )
        return TotalLatency
        ##########################################################
        ##################Code block for outputs##################
        ##########################################################
    def FourHundredCalls(self, n=400):
        latencies = []
        for i in range(n):
            lat = self.Caller(f"msg-{i:03d}")
            if lat is not None:
                latencies.append(max(0.0, lat))
        self.get_logger().info(f"collected {len(latencies)} latencies")
        return latencies

    def SaveCSV(self, latencies, path="service_latencies.csv"):
        with open(path, "w", newline="") as f:
            w = csv.writer(f)
            w.writerow(["latency_s"])
            for x in latencies:
                w.writerow([x])
        self.get_logger().info(f"wrote {path}")

    def Plot(self, latencies, path="service_latency_hist.png", bins=40, xlim=None):
        plt.figure()
        plt.hist(latencies, bins=bins)
        plt.xlabel("Latency(s)")
        plt.ylabel("Count")
        plt.title(f"Service transfer latency (n={len(latencies)})")
        if xlim is not None:
            plt.xlim(xlim)
        plt.tight_layout()
        plt.savefig(path, dpi=220)
        self.get_logger().info(f"saved {path}")



    
def main():
    rclpy.init()
    node = TextReverse()
    latencies = node.FourHundredCalls(n=400)
    node.SaveCSV(latencies, path="results/service_latencies.csv")
    xlim = (0.0, float(np.percentile(latencies, 99.5))) if latencies else (0.0, 1.0)
    node.Plot(latencies, path="results/service_latency_hist.png", xlim=xlim)
    # node.Caller("Reversed")
    node.destroy_node()
    rclpy.shutdown()