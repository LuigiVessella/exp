#include<stdio.h>
#include<math.h>

int main(){
	int n,fat;
        
	do{
		printf("Inserisci un numero non negativo: ");
		scanf("%d",&n);
	}while(n<0);

	fat=n;
	
        
	if(n==0)
		printf("n! = 1\n");

	else
	    {
		    while(n>1){
			   
			   fat=fat*(n-1);
		           n--;
		    }
	    
	printf("Il fattoriale e':%d\n",fat);
	    }

return 0;
}
