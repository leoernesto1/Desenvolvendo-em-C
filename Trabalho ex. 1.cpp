//Leonardo Ernesto          9036646         Inform�tica Biom�dica
#include<stdio.h>                           // Biblioteca
#include<string.h>                          // Biblioteca
#include<conio.h>                           // Biblioteca

int letra(char l[1000], char p[25]);        //Declara��o da Fun��o

main()
  {
    char a[1000], b[25];                     //Declara��o de matrizes
    int c;                                   //Declara��o de variavel
    printf("Entre com a string:");           //Mostra uma menssagem na tela
    gets(a);                                 //Salva a imporma��o digitada pelo usuario
    printf("Entre com a substring:");        //Mostra uma menssagem na tela
    gets(b);                                 //Salva a imporma��o digitada pelo usuario
    c = letra(a,b);                          /*Atribui o valor que foi gerado pela fun��o para a 
                                             variavel c, e manda para a fun��o letra as variaveis 
                                             digitadas pelo usuario*/
    if(c>0)                                  //Se o valor recebido pela fun��o for maior que zero, significa que h� uma substring
      { 
        printf("A substring come�a na posi��o %d.\n",c);//Mostra uma menssagem na tela
      } 
    else                                      //Caso o valor recebido n�o for maior que zero, significa que n�o h� uma substring
    {
        printf("0");                          //Mostra uma menssagem na tela
    }
    
    getch();                                  //Fixa a tela 
}

int letra(char l[1000], char p[25])           //Fun��o 
{
     char *u;                                 //Declara��o de ponteiro
	 u= strstr(l,p);                          //Localiza uma substring dentro de uma string e salva no ponteiro
	 int posicao=0;                           //Declara uma variavel igual a 0
	 if(u)                                    //Se existir valor para U
	 { 
	 	posicao = u - l + 1;                  //Calcula a posi��o, acrescenta 1 n posi��o pq a contagem do computador come�a com 0
	 }
     return posicao;    	                  //Se u for false � pq ele n�o encontrou a substring, ent�o vai retornar 0
} 

