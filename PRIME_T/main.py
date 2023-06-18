def CZYPIERWSZA(n):
    if n == 2:
        return True
    if n % 2 == 0 or n <= 1:
        return False

    pierw = int(n**0.5) + 1
    for dzielnik in range(3, pierw, 2):
        if n % dzielnik == 0:
            return False
    return True

for _ in range(0, int(input()), 1):
    if(CZYPIERWSZA( int(input()) )):
        print("TAK")
    else:
        print("NIE")
