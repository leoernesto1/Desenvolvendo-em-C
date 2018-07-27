/Nome: Leonardo Ernesto    9036646
#include<stdio.h> 
#include<stdlib.h>   
#include<time.h> 
#include<conio.h>      

main ()
{
  int a,b,y=0;//Variaveis
  srand (time(NULL));//Gera um numero aleatorio diferente a cada vez
  a= rand() %  100;//O numero aleatorio vai de 0 a 100

  do {
    printf ("Escolha um numero de (0 a 100): \n");//Pede que o usuario escolha um numero
    scanf ("%d",&b);// Salva esse numero
            
    if (a<b) printf("O numero que você digitou eh maior do que o numero sorteado\n\n");//Caso o numero escolhido pelo usuario seja maior do que o numero que o pc sorteou aparece na tela essa menssagem
    if (a>b) printf("O numero que você digitou eh menor do que o numero sorteado\n\n");//Caso o numero escolhido pelo usuario seja menor do que o numero que o pc sorteou aparece na tela essa menssagem
    y=y+1;//A cada vez que o usuario escolhe um numero é somado 1 a y
    
  } while (b!=a);//O ciclo se repete enquanto o valor que o usuario escolher não for igual ao sorteado pelo pc
  
  printf("\n\n\nParabéns!\n\n");//Quando for igual aparece esta menssagem
  printf("O numero de tentativas foi:%d", y);//Mostra o numero de tentativas que esta armazenado em y
  
  
  getch();//Para
}
