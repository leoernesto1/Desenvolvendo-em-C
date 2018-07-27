#include <stdio.h>

void torre(int n);
main()
{
	int n;
	scanf("%d", &n);
	torre(n);
}
void torre(int n)
{
	int m = 3;
	int i, j;
	int tabuleiro[m][n];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			tabuleiro[j][i]=0;
		}
	}
	for(i=0; i<n; i++)
	{
		tabuleiro[1][i]=i;
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\t|");
		}
		printf("\n");
	}
}
//1,2,6,24
