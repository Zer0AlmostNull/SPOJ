def find_primes(n):
    # Create a boolean array "prime[0..n]" and
    # initialize all entries it as true.
    prime = [True for _ in range(n+1)]

    prime[0] = False
    prime[1] = False

    p = 2
    while p * p <= n:
        # If prime[p] is not changed, then it is
        # a prime
        if prime[p]:
            # Update all multiples of p
            for i in range(p * p, n+1, p):
                prime[i] = False
        p += 1

    return prime


TESTS = [tuple(map(int, input().split())) for _ in range(int(input()))]
MAX = max(TESTS, key= lambda x: x[1])[1]

PRIMES = find_primes(MAX)
for min_, max_ in TESTS:
    for index in range(min_, max_+1):
        if PRIMES[index]:
            print(index)