#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

//char letra(char l[1000]; char p[25]);
//Fun��es usam "," entre os par�metros e n�o ";"
int letra(char l[1000], char p[25]);

main()
  {
    char a[1000], b[25];
    int c;
    printf("Entre com a string :");
    //getf(a);
    //a fun��o getf() n�o existe, o correto e apenas gets
    gets(a);
    printf("Entre com a substring :");
    //getf(b);
    gets(b);
    c = letra(a,b);
    if(c)
      { 
        printf("A string cont�m a substring.\n");
        printf("A substring come�a na posi��o %d.\n",c);
      } 
    else
    {
        //print("0");
        //printf() e n�o print()
        printf("A string n�o cont�m esta substring");
    }
    
    getch();
}

//char letra(char l[1000]; char p[25])
//Fun��es usam "," entre os par�metros e n�o ";"
//a fun��o retorna um int porque � para retornar a posi��o
int letra(char l[1000], char p[25])
{
     //char u[1025], l, p;
     //As chars l e p j� est�o declaradas como par�metros,
	 //vc n�o deve declar�-las de novo
	 
	 //char u[1025];
     char *u;
     /*a fun��o strstr retorna um ponteiro de char, e n�o
      um char. Ent�o u tem q ser declara do como um ponteiro
	 */
     
     //l=a;
     //p=b;
     /*A partir do momento em que vc chama a fun��o letra
       "letra(a,b);" vc j� est� atribuindo a para o primeiro par�metro, 
	   que � l, e b para o segundo, que � p.
	   Elas s�o atribuidas pela posi��o em que vc as coloca dentro
	   da chamada da fun��o*/
     
	 //u= strstr(l,b);
	 u= strstr(l,p);
	 /*aqui vc deve usar as vari�veis l e p que s�o os par�metros que
	  a fun��o recebeu l� no in�cio. b foi atribuida a p anteriormente*/
	 
	 int posicao=0;
	 
	 if(u)
	 { 
	 	posicao = u - l + 1;//acrescenta 1 n posi��o pq a contagem do computador come�a com 0
	 }
	 //se u for false � pq ele n�o encontrou a substring, ent�o vai retornar 0
     return posicao;
} 

