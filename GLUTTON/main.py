
from math import ceil
for _ in range(0,int(input())):
    tmp1 = [int(x) for x in input().split(' ')]
    print(ceil(sum([int((24*3600)/int(input())) for x in range(0, tmp1[0])])/tmp1[1]))

