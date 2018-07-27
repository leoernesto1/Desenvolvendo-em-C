#include <iostream>
#include <cstdlib> //biblioteca que contém o exit(0);
#include "L1E16.h"

JogoVida::JogoVida(int tab[X][Y])
//Pré-condição: receber tabuleiro com células vivas
//Pós-condição: Tabuleiro preenchido
{
	//preenche o tabuleiro
	for(int i = 0; i<X; i++)
		for(int j=0; j<Y; j++)
			tabuleiro[i][j] = tab[i][j];
}

void JogoVida::novaIteracao()
//Pré-condição: Nenhuma
//Pós-condição: Mata a célula que tem menos de 2 células vivas em volta ou dá vida a células que têm 3 células vivas em volta
{
	int vivas;
	int tab[X][Y];
	
	//Loop por todas as linhas e colunas do tabuleiro
	for(int i = 0; i<X; i++)
	{
		for(int j=0; j<Y; j++)
		{
			vivas=0;
			//Loop por todas as linhas e colunas em volta de uma célula
			for(int a=-1; a<=1; a++)
				for(int b=-1; b<=1; b++)
					if(!(a==0 && b==0))//evita contar a própria célula
						if((i+a)!=-1 && (i+a)!=X && (j+b)!=-1 && (j+b)!=Y)//verifica quando o loop tenta passar por uma célula inexistente no tabuleiro
							if(tabuleiro[i+a][j+b]==1)
								vivas+=1;
			
			if(vivas<=1)//a célula morre
				tab[i][j]=0;
			else if(vivas>=3)//a célula vive
				tab[i][j]=1;
		}
	}
	
	//*********criar outro tabuleiro para evitar que as alterações de um loop interfiram na de outro campo******
	//preenche o tabuleiro velho com o tabuleiro da nova iteração
	for(int i = 0; i<X; i++)
		for(int j=0; j<Y; j++)
			if(tab[i][j]==0 || tab[i][j]==1)//evita a cópia de campos não preenchidos do vetor tab
				tabuleiro[i][j] = tab[i][j];
}

void JogoVida::exibirTabuleiro()
//Pré-condição: Nenhuma
//Pós-condição: Exibe o tabuleiro
{
	for(int i = 0; i<X; i++)
	{
		cout << "\t";
		for(int j=0; j<Y; j++)
			cout << tabuleiro[i][j] << " ";
		cout << "\n\n";
	}
}

main()
{
	int tab[X][Y];
	int novaIteracao;
	
	cout << "Preencha o tabuleiro do jogo da vida com céluas vivas ou mortas." << endl;
	cout << "Digite 1 para vivas e 0 para mortas." << endl;
	
	//Loop de preenchimento do tabuleiro
	for(int i = 0; i<X; i++)
		for(int j=0; j<Y; j++)
		{
			do
			{
				cout << "célula[" << i << "][" << j << "]: ";
				cin >> tab[i][j];
			}
			while(tab[i][j]!=1 && tab[i][j]!=0);
		}
	
	cout << "\n";
	
	//gera o jogo da vida
	JogoVida jv(tab);
	
	//Loop de nova iteração
	do
	{
		jv.exibirTabuleiro();
		cout << "Deseja realizar uma nova iteracao?" << endl;
		cout << "Digite 1 para realizar uma nova iteracao e 0 para sair." << endl;
		cin >> novaIteracao;
		if(novaIteracao==1)
			jv.novaIteracao();
	}
	while(novaIteracao!=0);
	
	exit(0);
}
