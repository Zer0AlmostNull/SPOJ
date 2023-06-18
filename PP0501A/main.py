def NWD(a, b):
    while b:
        a, b = b, a%b
    return a

for _ in range(int(input())):
    tmp = map(int, input().split())
    print(NWD(tmp[0], tmp[1]))
