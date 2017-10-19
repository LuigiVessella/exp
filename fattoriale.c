#include<stdio.h>
#include<math.h>

int main(){
	int n,i,fat=1;
        
	do{
		printf("Inserisci un numero non negativo: ");
		scanf("%d",&n);
	}while(n<0);

	i=n;
        
	if(n==0)
		printf("n! = 1\n");

	else
	    {
		    while(i>1){
			   
			   fat=fat*(n*(i-1));
			   n=1;
		           i--;	
		    }
	    }

	printf("Il fattoriale e':%d\n",fat);


return 0;
}
