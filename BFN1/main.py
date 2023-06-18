for _ in range(0,int(input())):
    n=int(input())
    t=0
    while((str(n) == str(n)[::-1]) == False):
        n = n + int(str(n)[::-1])
        t += 1
    print(n,t)
