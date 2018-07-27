#include <stdio.h>

int soma(int *M);

main()
{
	int m[5][5];
	int *x;
	x=m[0];
	for(int i=0; i<25; i++)
	{
		*(x+i)=i;
	}
	printf("A soma dos valores da matriz eh: %d", soma(m[0]));
}

int soma(int *M)
{
	int s=0;
	for(int i=0; i<25; i++)
	{
		s+=*(M+i);
	}
	return s;
}
