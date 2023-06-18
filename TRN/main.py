m, n = map(int, input().split())

# wczytaj macierz
macierz = []
for i in range(m):
    wiersz = list(map(int, input().split()))
    macierz.append(wiersz)

# transponuj macierz
macierz_transponowana = [[macierz[j][i] for j in range(m)] for i in range(n)]

# wypisz macierz transponowaną
for wiersz in macierz_transponowana:
    print(*wiersz)
