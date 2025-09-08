import rclpy
from rclpy.node import Node
from time import perf_counter
from naal3202_service.srv import Naal3202Service

class TextReverse(Node):
    def __init__(self):
        super().__init__('text_reverse')
        self.srv = self.create_service(Naal3202Service, 'reverse', self.TheReverseinator)
        

    def TheReverseinator(self, WordInput, WordOutput):
        ##########################################################
        ###########Code block for text flip and timer#############
        ##########################################################
        StartTimer = perf_counter()

        Word       = WordInput.text.data
        WordFlip   = Word[::-1]

        TotalTime  = perf_counter() - StartTimer
        ##########################################################
        ###########Code block for text flip and timer#############
        ##########################################################

        ##########################################################
        ##################Code block for outputs##################
        ##########################################################
        WordOutput.reverse = WordFlip
        WordOutput.time    = TotalTime
        return WordOutput
        ##########################################################
        ##################Code block for outputs##################
        ##########################################################

        #personal note: very exiting to set up my first ROS2 script, file path, etc
        #               overall still not good at it, need to watch more tutorials,
        #               i have a hard time focousing when reading

def main():
    rclpy.init()
    ping = TextReverse()
    rclpy.spin(ping)
    ping.destroy_node()
    rclpy.shutdown()
