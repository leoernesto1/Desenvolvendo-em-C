#include <stdio.h>
#include<conio.h>

int sd_principal(int M[6][6]);
int sd_secundaria(int M[6][6]);

main()
{
	int matriz[6][6];
	int *m;
	m=matriz[0];
	for(int i=0; i<36; i++)
	{
		*(m+i)=i;
	}
	printf("A soma dos elementos da diagonal principal eh: %d", sd_principal(matriz));
	printf("\nA soma dos elementos da diagonal secundaria eh: %d", sd_secundaria(matriz));
	getch();
}

int sd_principal(int M[6][6])
{
	int dp=0;
	for(int j=0; j<6; j++)
	{
		dp+=M[j][j];
	}
	return dp;
}
int sd_secundaria(int M[6][6])
{
	int ds=0;
	for(int j=0; j<6; j++)
	{
		ds+=M[j][5-j];
	}
	return ds;
}
