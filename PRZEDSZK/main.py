def NWD(a, b):
    while b:
        a, b = b, a%b
    return a

for _ in range(0,int(input())):
    x = [int(z) for z in input().split(' ')]
    print(int((x[0] * x[1])/NWD(x[0], x[1])))