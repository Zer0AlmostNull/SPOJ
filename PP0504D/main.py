import struct

def printfloat(f):
    x = struct.pack('!f', f)
    for i in range(0, 4):

        print(f"{x[i]:x}", end=' ')
    print()

t = int(input())
for _ in range(t):
    f = float(input())
    printfloat(f)