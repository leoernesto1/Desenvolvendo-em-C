#include <stdio.h>
#include<conio.h>

int soma_linha(int linha, int M[7][6]);
int soma_coluna(int coluna, int  M[7][6]);

main()
{
	int matriz[7][6];
	int *m;
	m=matriz[0];
	for(int i=0; i<42; i++)
	{
		*(m+i)=i;
	}
	printf("A soma da linha 5 eh: %d", soma_linha(5, matriz));
	printf("\nA soma da coluna 3 eh: %d", soma_coluna(3, matriz));
	getch();
}

int soma_linha(int linha, int M[7][6])
{
	int soma=0;
	for(int j=0; j<6; j++)
	{
		soma+=M[linha][j];
	}
	return soma;
}
int soma_coluna(int coluna, int  M[7][6])
{
	int soma=0;
	for(int j=0; j<7; j++)
	{
		soma+=M[j][coluna];
	}
	return soma;
}
