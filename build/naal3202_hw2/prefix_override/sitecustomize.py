import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/nasser/ros2_assign1_sw/assignment-1.NasserAlMuaili/install/naal3202_hw2'
