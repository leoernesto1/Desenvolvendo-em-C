//Leonardo Ernesto          9036646         Informática Biomédica
#include<stdio.h>                           // Biblioteca
#include<string.h>                          // Biblioteca
#include<conio.h>                           // Biblioteca

int letra(char l[1000], char p[25]);        //Declaração da Função

main()
  {
    char a[1000], b[25];                     //Declaração de matrizes
    int c;                                   //Declaração de variavel
    printf("Entre com a string:");           //Mostra uma menssagem na tela
    gets(a);                                 //Salva a impormação digitada pelo usuario
    printf("Entre com a substring:");        //Mostra uma menssagem na tela
    gets(b);                                 //Salva a impormação digitada pelo usuario
    c = letra(a,b);                          /*Atribui o valor que foi gerado pela função para a 
                                             variavel c, e manda para a função letra as variaveis 
                                             digitadas pelo usuario*/
    if(c>0)                                  //Se o valor recebido pela função for maior que zero, significa que há uma substring
      { 
        printf("A substring começa na posição %d.\n",c);//Mostra uma menssagem na tela
      } 
    else                                      //Caso o valor recebido não for maior que zero, significa que não há uma substring
    {
        printf("0");                          //Mostra uma menssagem na tela
    }
    
    getch();                                  //Fixa a tela 
}

int letra(char l[1000], char p[25])           //Função 
{
     char *u;                                 //Declaração de ponteiro
	 u= strstr(l,p);                          //Localiza uma substring dentro de uma string e salva no ponteiro
	 int posicao=0;                           //Declara uma variavel igual a 0
	 if(u)                                    //Se existir valor para U
	 { 
	 	posicao = u - l + 1;                  //Calcula a posição, acrescenta 1 n posição pq a contagem do computador começa com 0
	 }
     return posicao;    	                  //Se u for false é pq ele não encontrou a substring, então vai retornar 0
} 

