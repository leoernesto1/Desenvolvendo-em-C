#include <stdio.h>
#include <math.h>
#include<conio.h>

float volume(int r);

main()
{
	int raio;
	printf("Digite o raio da esfera\n");
	scanf("%d", &raio);
	printf("O volume da esfera eh : %.2f", volume(raio));
	/*%.2f quer dizer que a vari�vel float ser� exibida 
	apenas com 2 casas decimais*/
	getch();
}

float volume(int r)
{
	return (4.0/3.0)*M_PI*pow(r,3);
	//"M_PI" � um constante da biblioteca math (uma vari�vel fixa) que armazena PI
}
