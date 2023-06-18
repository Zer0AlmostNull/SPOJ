for _ in range(0, int(input())):
    tmp = input().split()[1:]
    print(' '.join(tmp[1:]+[tmp[0],]))