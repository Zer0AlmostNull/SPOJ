for _ in range(int(input())):
    x,y,z = map(int, input().split(' '))
    print(round(((z*y-x-y)*12)/(z-1)))