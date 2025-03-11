#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int N=100, i, Sc, S, Cs, Diff;
int main(int argc, char *argv[]) {
	
//    la somme des carré
	 for (i = 1; i <= 100; i++) {
    	/*printf(" %d ",i*i);*/
    	/*printf("\n");*/
        Sc += i*i;
    } 
    printf("\nLa somme des carré des 100 premiers nombres naturels est %d\n",Sc);
    
    printf("\n");
//    Le carré de la somme
    for (i = 1; i <= 100; i++) {
    	/*printf(" %d ",i*i);*/
		S += i;
    	/*printf("\n");*/
        Cs = S*S ;
    }
   printf("\nLe carré de la somme des 100 premiers nombres naturels est %d\n",Cs);

 printf("\n");
//    La différence entre Sc et Cs
    
    Diff= Cs-Sc;
    printf("\nLa différence entre Sc et Cs des 100 premiers nombres naturels est %d\n",Diff);


	return 0;
}
