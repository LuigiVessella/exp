#include<stdio.h>

int main(){
	int fat=1, i;
	double ris=1.0, dif;

	for(i=1; i<10; i++){
		dif=dif;
		fat=fat*i;
	 	ris=ris+(1./(double)fat);
                printf("e: %f\n",ris);	

	       	if(ris-(int)ris >= 0.718)
			break;
	}

return 0;
}
		
