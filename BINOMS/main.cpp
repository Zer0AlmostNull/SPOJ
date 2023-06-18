#include <cstdio>
#include <algorithm>

using namespace std;

long unsigned int binomial_coefficient(long unsigned int n, long unsigned int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    
    k = min(k, n-k);
    long unsigned int result = 1;
    for (int i = 1; i <= k; i++) {
        result *= (n - i + 1);
        result /= i;
    }
    
    return result;
}

int main() {
    int tests, n, k;
    
    scanf("%d", &tests);
    for (int i = 0; i < tests; i++) {
        scanf("%d %d", &n, &k);
        printf("%lu\n", binomial_coefficient(n, k));
    }
    
    return 0;
}
