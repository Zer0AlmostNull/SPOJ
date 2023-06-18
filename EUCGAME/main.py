liczba_partii=int(input())

while(liczba_partii!=0):
    tmp=[int(x) for x in input().split(' ')]
    a, b = tmp[0], tmp[1]

    while(a!=b):
        if(a<b):
            b=b-a
        elif(b<a):
            a=a-b

    print(a+b)
    
    liczba_partii-=1
