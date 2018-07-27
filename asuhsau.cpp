#include <stdio.h>
#include<stdlib.h>
#include <conio.h> 

main(){
	float a;
	int b;
	float aux;

	int x;
	float c;
	x =100;
	c = 0;
	aux = 0;

	
	printf("\n Digite o valor investido ");
	scanf("%f", & a);
	printf("\n Digite a quantidade de meses ");
	scanf("%d", & b);

	for (int i=0; i<= b ; i++){
		
		
		if ((i % 6)== 0){
		
			aux = ((a*5.6)/100);
			c= aux+a;
			printf("\n %f", c);
		}
		
		
		if((i % 6) != 0)
		{
			a = a+x;
			printf("\n %f %d", a, i);
			
		}
	
	
	}
	printf ("\no resultado final eh %f", c);
}
