
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

long long crible_eratosthene(long int N) {
    long int i, j;

    // Allouer un tableau pour marquer les nombres premiers 
    bool *est_premier = (bool *)malloc((N + 1) * sizeof(bool));

    // Initialiser tous les nombres comme premiers
    for (i = 2; i <= N; i++) {
        est_premier[i] = true;
    }
    
    
    // Crible d'Ératosthène pour eliminer les multiples des nombres premiers
     for (i = 2; i*i <= N; i++) {
        if (est_premier[i]) {
            for (j = i*i; j <= N; j+= i) {
                est_premier[j] = false;
            }
        }
    }

// Calculer la somme des nombres premiers
    long long S = 0;
    for (i = 2; i <= N; i++) {
        if (est_premier[i]) {
            S += i;
        }
    }


   // Libérer la mémoire allouée
    free(est_premier);
    return S;
}

int main() {
    long int N;
    long long S;
    
    printf("Definisser la limite à atteindre : ");
    scanf("%ld", &N);


 // Appeler la fonction crible d'Ératosthène pour calculer la somme des premiers
    S = crible_eratosthene(N);

    printf("\nLa somme des nombres premiers sous la limite %ld est %lld\n", N, S);

    return 0;
}

