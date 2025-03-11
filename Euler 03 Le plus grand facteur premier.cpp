#include <stdio.h>

void find_factors(long long int n) {
   long long int i;
    while (n % 2 == 0) {
        printf("%lld ", 2);
        n /= 2;
    }
    
    
    for ( i = 3; i*i<=n; i+= 2) {
        while (n % i == 0) {
            printf("%lld ", i);
            n /= i;
        }
    }
    
    
    if (n > 2) {
        printf("%lld ", n);
    }
}

int main() {
    long long N = 600851475143;
    printf("Les facteurs premiers de %lld sont : \n", N);
    find_factors(N);
    return 0;
}

