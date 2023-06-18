for _ in range(int(input())):
    x1,y1, x2, y2, x3, y3 = map(int, input().split('\t'))
    
    if(x1==x2==x3 or y1==y2==y3):
        print('TAK')
        continue
    
    if(x1-x2 ==0):
        print('NIE')
        continue
    
    if ( y3 == ((y2-y1)/(x2-x1))*(x3-x1) + y1):
        print('TAK')
    else:
        print('NIE')