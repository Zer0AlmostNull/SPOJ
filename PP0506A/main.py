from math import sqrt

def calcDist(inp):
    return sqrt(int(inp[1])**2 + int(inp[2])**2)

for _ in range(int(input())):
    x = ''
    # skipping random enters
    while x=='':
        x=input()

    tmp = [input().split(' ') for _ in range(0, int(x))]

    tmp.sort(key = calcDist) 
    print('\n'.join([' '.join(z) for z in tmp]))

    