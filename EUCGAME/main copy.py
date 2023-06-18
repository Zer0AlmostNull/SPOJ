'''
def nwd(a, b):
    if (b == 0):
        return a
    return nwd(b, (a % b))
'''
import math

liczba_partii = int(input())


while(liczba_partii!=0):
    tmp=[int(x) for x in input().split(' ')]
    a, b = tmp[0], tmp[1]

    if(a == 1 or b == 1 or abs(a-b)==1):
        print(2)
    elif a == b:
        print(2*a)
    elif a>b:
        print(a - (a - b))
    elif b>a:
        print(b - (b - a))
    else:
        print(2)


    liczba_partii-=1
        
