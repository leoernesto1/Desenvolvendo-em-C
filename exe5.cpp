#include <stdio.h>

int pares(int *X);

main()
{
	int vetX[15];
	for(int i=0; i<15; i++)
	{
		vetX[i]=i;
	}
	printf("O vetor possui %d numeros pares", pares(vetX));
}

int pares(int *X)
{
	int soma=0;
	
	for(int j=0; j<15; j++)
	{
		if(X[j]%2==0)
		{
			soma++;
		}
	}
	return soma;
}
