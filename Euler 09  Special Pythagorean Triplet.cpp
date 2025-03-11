#include <stdio.h>
#include <stdlib.h>
//   *a<b<c tq a^2+b^2=c^2
    
int main() {
    int a,b,c,produit;
   
    for(a=1; a<1000; a++){
    	for(b=a+1; b<1000; b++){ // b est sup à a selon la relation (*)
    	  c=1000-a-b;
             if(a*a+b*b==c*c){
		       printf(" a =%d, b=%d, c=%d\n",a,b,c);
		       produit=a*b*c;
		         printf("Le produit = %d \n",produit);
		           return 0;
             }
		}
	}

		 printf("pas de solution\n");
	
	
    return 0;
}

