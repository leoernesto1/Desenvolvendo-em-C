#include <stdio.h>

void uniao(int *v1, int *v2, int *vu);

main()
{
	int vetor1[10], vetor2[10], vetoru[10];
	
	for(int i=0; i<10; i++)
	{
		vetor1[i]=i;
		vetor2[i]=i+10;
	}
	
	uniao(vetor1, vetor2, vetoru);
	
	for(int j=0; j<10; j++)
	{
		printf("%d ", vetoru[j]);
	}
}

void  uniao(int *v1, int *v2, int *vu)
{
	for(int y=0; y<10; y++)
	{

		vu[i]=v1[i]+v2[i]
		//*(vu+i)=*(v1+i)+*(v2+i);
	}
}
