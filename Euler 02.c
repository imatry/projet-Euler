#include <stdio.h>

int main() {
   
	int   N, i, f1 = 0, f2 = 1, fib, S= 0;
 
 
//nombre de termes � afficher
    printf("Combien de termes de la suite de Fibonacci voulez-vous afficher ? ");
    scanf("%d", &N);

   printf("Les termes de la suite de Fibonacci :\n"); // ce message va s'afficher
    if (N >= 1) {
        printf("%d ", f1); //0 est le premier terme de la suite de Fibonacci et il est fixe
    }
    if (N >= 2) {
        printf("%d ", f2); //1 est le second terme de la suite de fibonacci et lui aussi est fixe
    }

//apr�s avoir afficher les deux premiers termes de la suite de Fibonacci je vais afficher les autres termes 
    for ( i = 3; i <= N; i++) {
        fib = f1 + f2; // chaque nouveau terme est issu de la somme des deux precedents
        printf("%d ", fib); // afficher le nouveau terme 
        
//    Ensuite mettre � jour les anciens termes
        f1 = f2;
        f2 = fib;
    }

    printf("\n");// passage � la ligne

    printf("Les nombres pairs de la suite de Fibonacci :\n");//ce message apparait pour lister les nombres paires
    
    f1 = 0;
    f2 = 1;

    if (f1 % 2 == 0) {
        printf("%d ", f1);
        S += f1;
    }
    if (f2 % 2 == 0) {
    printf("%d ", f2);
        S += f2;
    }

    for (i = 3; i <= N; i++) {
        fib = f1 + f2;
        if (fib % 2 == 0) {
           printf("%d ", fib);
            S += fib;
        }
        f1 = f2;
        f2 = fib;
    }

    printf("\nLa somme des nombres pairs de la suite de Fibonacci est : %d\n", S);

    return 0;
}
