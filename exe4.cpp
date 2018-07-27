#include <stdio.h>



#include<conio.h>

void par_impar(int *A, int *B, int *X);

main()
{
	int vetA[15], vetB[15], vetX[30];
	
	for(int i=0; i<30; i++)
	{
		vetX[i]=i;
	}
	par_impar(vetA, vetB, vetX);
	
	printf("Pares: ");
	for(int z=0; z<15; z++)
	{
		printf("%d ", vetA[z]);
	}
	
	printf("\nImpares: ");
	for(int w=0; w<15; w++)
	{
		printf("%d ", vetB[w]);
	}
	getch();
}

void par_impar(int *A, int *B, int *X)
{
	int a=0, b=0;
	for(int j=0; j<30; j++)
	{
		if(X[j]%2==0)
		{
			A[a]=X[j];
			a++;
		}
		else
		{
			B[b]=X[j];
			b++;
		}
	}
}
