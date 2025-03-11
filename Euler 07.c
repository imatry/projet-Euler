#include <stdio.h>
#include <math.h>

// Fonction pour v�rifier si un nombre est premier
int est_premier(int b) {
	long i;
    if (b <= 1) {
        return 0;  // Les nombres <= 1 ne sont pas premiers
    }
    for ( i = 2; i <= sqrt(b); i++) {
        if (b % i == 0) {
            return 0;  // Si b est divisible par i, ce n'est pas un nombre premier
        }
    }
    return 1;  // Sinon, b est un nombre premier
}

int main() {
    int n;
    printf("Entrez le num�ro du nombre premier que vous voulez trouver (n) : ");
    scanf("%d", &n);

    int position = 0;  // Compteur pour les nombres premiers trouv�s
    int np_actu = 2;  // Le nombre � tester pour �tre premier

    while (1) {
        if (est_premier(np_actu)) {
            position++;  // Si le nombre est premier, on l'ajoute au compteur
            if (position == n) {
                printf("Le %d-i�me nombre premier est : %d\n", n, np_actu);
                break;  // On a trouv� le n-i�me nombre premier, on sort de la boucle
            }
        }
        np_actu++;  // On teste le nombre suivant
    }

    return 0;
}


