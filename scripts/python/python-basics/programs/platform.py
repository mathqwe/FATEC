from sys import platform
from sys import version

os = platform
vrs = version

if os != "linux":
    print("Oh no D:\n Go install Linux!")
else:
    print(f"Hello There, you are running Python3 on {os}\n {vrs}")
