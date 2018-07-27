#include <iostream>
#include <cstdlib> //biblioteca que cont�m o exit(0);
#include "L1E16.h"

JogoVida::JogoVida(int tab[X][Y])
//Pr�-condi��o: receber tabuleiro com c�lulas vivas
//P�s-condi��o: Tabuleiro preenchido
{
	//preenche o tabuleiro
	for(int i = 0; i<X; i++)
		for(int j=0; j<Y; j++)
			tabuleiro[i][j] = tab[i][j];
}

void JogoVida::novaIteracao()
//Pr�-condi��o: Nenhuma
//P�s-condi��o: Mata a c�lula que tem menos de 2 c�lulas vivas em volta ou d� vida a c�lulas que t�m 3 c�lulas vivas em volta
{
	int vivas;
	int tab[X][Y];
	
	//Loop por todas as linhas e colunas do tabuleiro
	for(int i = 0; i<X; i++)
	{
		for(int j=0; j<Y; j++)
		{
			vivas=0;
			//Loop por todas as linhas e colunas em volta de uma c�lula
			for(int a=-1; a<=1; a++)
				for(int b=-1; b<=1; b++)
					if(!(a==0 && b==0))//evita contar a pr�pria c�lula
						if((i+a)!=-1 && (i+a)!=X && (j+b)!=-1 && (j+b)!=Y)//verifica quando o loop tenta passar por uma c�lula inexistente no tabuleiro
							if(tabuleiro[i+a][j+b]==1)
								vivas+=1;
			
			if(vivas<=1)//a c�lula morre
				tab[i][j]=0;
			else if(vivas>=3)//a c�lula vive
				tab[i][j]=1;
		}
	}
	
	//*********criar outro tabuleiro para evitar que as altera��es de um loop interfiram na de outro campo******
	//preenche o tabuleiro velho com o tabuleiro da nova itera��o
	for(int i = 0; i<X; i++)
		for(int j=0; j<Y; j++)
			if(tab[i][j]==0 || tab[i][j]==1)//evita a c�pia de campos n�o preenchidos do vetor tab
				tabuleiro[i][j] = tab[i][j];
}

void JogoVida::exibirTabuleiro()
//Pr�-condi��o: Nenhuma
//P�s-condi��o: Exibe o tabuleiro
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
	
	cout << "Preencha o tabuleiro do jogo da vida com c�luas vivas ou mortas." << endl;
	cout << "Digite 1 para vivas e 0 para mortas." << endl;
	
	//Loop de preenchimento do tabuleiro
	for(int i = 0; i<X; i++)
		for(int j=0; j<Y; j++)
		{
			do
			{
				cout << "c�lula[" << i << "][" << j << "]: ";
				cin >> tab[i][j];
			}
			while(tab[i][j]!=1 && tab[i][j]!=0);
		}
	
	cout << "\n";
	
	//gera o jogo da vida
	JogoVida jv(tab);
	
	//Loop de nova itera��o
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
