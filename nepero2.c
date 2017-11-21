#include<stdio.h>

int main(){
	int fat=1, i;
	double ris=1.0, dif;

	for(i=1; i<10; i++){
		dif=dif;
		fat=fat*i;
		ris=ris+(1./(double)fat);

		printf("parte decimale: %f\n",ris-(int)ris);
	}

return 0;
}
		
