t = int(input()) # wczytaj liczbę zestawów danych

for i in range(t):
    n = int(input()) # wczytaj kolejną liczbę całkowitą
    
    # zamień n na system szesnastkowy i jedenastkowy
    hex_n = hex(n)[2:].upper()
    eleven_n = ""
    while n > 0:
        digit = n % 11
        if digit < 10:
            eleven_n = str(digit) + eleven_n
        else:
            eleven_n = "A" + eleven_n
        n //= 11
    
    # wypisz wynik dla tej liczby
    print(hex_n, eleven_n)