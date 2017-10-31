#include<stdio.h>

int main(){
	int fat, n=0, i, cifra=0, ver;
        double ris=1.0;

	for(i=2; i<11; i++){
		n=i;
		fat=1;
		ver=cifra;
		cifra=0;
		while(n>1){
		        fat=fat*(n-1);
			n--;
		}
	
		ris=ris+(1./(double)fat);
		printf("e: %f\n",ris);        
		cifra=(double)ris%10.;
		
	
		if(i>3 && cifra==ver)
		       	break;
		
		printf("cifra: %d\n", cifra);
		
	}

return 0;
}
