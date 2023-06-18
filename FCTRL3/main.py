def silnia(n):
    tmp=1
    for number in range(1,n+1,1):
        tmp=tmp*number
    return tmp

def dwiecyfrsilni(n):
    if(n>=10):
        print('0 0')
    elif(n==1):
        print('0 1')
    else:
        tmp=repr(silnia(n))
        if(len(tmp)>1):
            print(tmp[-2],tmp[-1])
        else:
            print(0,tmp[-1])


for _ in range(0, int(input())):
    dwiecyfrsilni(int(input()))