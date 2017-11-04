#include<stdio.h>

int main(){
	int fat=1, i;
        double ris=1.0;

	for(i=2; i<11; i++){
	
		fat=fat*i;	
		ris=ris+(1./(double)fat);
		printf("e: %f\n",ris);     
	}

return 0;
}
