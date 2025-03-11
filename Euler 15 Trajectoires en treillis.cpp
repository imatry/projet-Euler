#include <stdio.h>
//unsigned -->

unsigned long long binomial(int n, int k) {  //unsigned long long 
long long int i;
    //le coefficient binomial C(n, k)
    

    if (k > n) return 0;//pas de solution dans ce cas car C(n,k)=0


     // Optimisation : utiliser la propriété C(n, k) = C(n, n-k)
    if (k > n - k) {
    	 printf("k = n - k");
	}

    unsigned long long result = 1;

   // Calcul du coefficient binomial
    for ( i = 0; i < k; i++) {
        result *= (n - i);
        result /= (i + 1);
    }

    return result;
}

int main() {
    int n, k;
     printf("Donner n \n");
     scanf("%d",&n);
     
     printf("Donner k\n");
     scanf("%d",&k);
     
    unsigned long long result = binomial(n, k);

    printf("Le coefficient binomial C(%d, %d) est: %llu\n", n, k, result);

    return 0;
}



