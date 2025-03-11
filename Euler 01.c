#include <stdio.h>
#include <stdlib.h>
int i,S=0;
int main(int argc, char *argv[]) {
	for(i=0;i<1000;i++){ // 
		if( i%3==0||i%5==0){//
                       printf("%d\n",i);
				S+=i;
		}
	}
		printf(" la somme des multiples de 3 ou 5 sous 1000 est %d\n",S);
	return 0;
}
