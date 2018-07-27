#include <stdio.h>
#include<conio.h>

int perfeito(int n);

main()
{
	int numero;
	printf("Digite o numero\n");
	scanf("%d", &numero);
	if(perfeito(numero))
	{
		printf("O numero %d eh pefeito", numero);
	}
	else
	{
		printf("O numero %d nao eh perfeito", numero);		
	}
	getch();
}

int perfeito(int n)
{
	int soma = 0;
	for(int i=1; i<n; i++)
	{
		/*Se o resto da divisão de n por i for igual a 0
		a soma é executada*/
		if(n%i==0)
		{
			soma+=i;
		}
	}
	if(soma==n || n==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
