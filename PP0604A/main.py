for _ in range(int(input())):
    l = list(map(int, input().strip().split(' ')[1:]))
    avg = sum(l)/len(l)
    print(min(l, key= lambda x: abs(x-avg)))