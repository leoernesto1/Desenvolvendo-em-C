#include <stdio.h>
#include<conio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int interseccao(int *A, int tamA, int *B, int tamB, int *C);
void preencher_vetor(int *A, int tamA, int semente);
void exibir_vetor(int *A, int tamA, char nomeA[]);
int retirar_repeticao(int *X, int tamX, int *X_sem_rep);
 
main()
{
	int n, m, x, i;
	printf("Digite o valor de n\n");
	scanf("%d", &n);
	printf("Digite o valor de m\n");
	scanf("%d", &m);
	if(n>m)
	{
		x=m;
	}
	else
	{
		x=n;
	}

	int vetN[n], vetM[m], vetI[x];
	srand(time(NULL));
	preencher_vetor(vetN, n, rand() % 10);
	preencher_vetor(vetM, m, rand() % 10);
	exibir_vetor(vetN, n, (char*)"Vetor N");
	exibir_vetor(vetM, m, (char*)"Vetor M");
	int z = interseccao(vetN, n, vetM, m, vetI);
	exibir_vetor(vetI, z, (char*)"Vetor de interseccao");
	getch();
}
int interseccao(int *A, int tamA, int *B, int tamB, int *C)
{
	int i, j, Ac[tamA], Bc[tamB], a=0, b=0, c=0;
	a=retirar_repeticao(A, tamA, Ac);
	b=retirar_repeticao(B, tamB, Bc);
	exibir_vetor(Ac, a, (char*)"Vetor N sem repeticoes");
	exibir_vetor(Bc, b, (char*)"Vetor M sem repeticoes");
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			if(Ac[i]==Bc[j])
			{
				*(C+c)=Ac[i];
				c++;
			}
		}
	}
	return c;
}
void preencher_vetor(int *A, int tamA, int semente)
{
	srand(semente);
	int limite=10; 
	for(int i=0; i<tamA; i++)
	{	 
    	A[i] = rand() % limite;
	}
}
void exibir_vetor(int *A, int tamA, char nomeA[])
{
	printf("\n%s: ", nomeA);
	for(int i=0; i<tamA; i++)
	{
		printf("%d ", A[i]);
	} 
}
int retirar_repeticao(int *X, int tamX, int *X_sem_rep)
{
	int nt, z=0;
	for(int i=0; i<tamX; i++)
	{
		nt=1;
		for(int j=0; j<tamX; j++)
		{
			if(i!=j && *(X+i)==*(X+j) && i>j)
			{
				nt=0;
			}
		}
		if(nt)
		{
			X_sem_rep[z]=*(X+i);
			z++;
		}
	}
	return z;
}
