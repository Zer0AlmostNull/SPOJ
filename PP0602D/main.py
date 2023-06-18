# Odczyt danych wejściowych
n, k = map(int, input().split())
tablica = list(map(int, input().split()))

k %= n  # Jeśli k jest większe niż n, wykonujemy modulo k przez n, aby uniknąć zbędnych obrotów

# Przesunięcie elementów tablicy
tablica = tablica[k:] + tablica[:k]

# Wyświetlenie wyniku
print(*tablica)
