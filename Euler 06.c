#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int N=100, i, Sc, S, Cs, Diff;
int main(int argc, char *argv[]) {
	
//    la somme des carr�
	 for (i = 1; i <= 100; i++) {
    	/*printf(" %d ",i*i);*/
    	/*printf("\n");*/
        Sc += i*i;
    } 
    printf("\nLa somme des carr� des 100 premiers nombres naturels est %d\n",Sc);
    
    printf("\n");
//    Le carr� de la somme
    for (i = 1; i <= 100; i++) {
    	/*printf(" %d ",i*i);*/
		S += i;
    	/*printf("\n");*/
        Cs = S*S ;
    }
   printf("\nLe carr� de la somme des 100 premiers nombres naturels est %d\n",Cs);

 printf("\n");
//    La diff�rence entre Sc et Cs
    
    Diff= Cs-Sc;
    printf("\nLa diff�rence entre Sc et Cs des 100 premiers nombres naturels est %d\n",Diff);


	return 0;
}
