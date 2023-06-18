def CZYPIERWSZA(n):
    if n==1:
        return False
    for i in range(n-1,1,-1):
        if n%i==0:
            return False
    return True

for _ in range(0, int(input()), 1):
    if(CZYPIERWSZA( int(input()) )):
        print("TAK")
    else:
        print("NIE")