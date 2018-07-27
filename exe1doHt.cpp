#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

//char letra(char l[1000]; char p[25]);
//Funções usam "," entre os parâmetros e não ";"
int letra(char l[1000], char p[25]);

main()
  {
    char a[1000], b[25];
    int c;
    printf("Entre com a string :");
    //getf(a);
    //a função getf() não existe, o correto e apenas gets
    gets(a);
    printf("Entre com a substring :");
    //getf(b);
    gets(b);
    c = letra(a,b);
    if(c)
      { 
        printf("A string contém a substring.\n");
        printf("A substring começa na posição %d.\n",c);
      } 
    else
    {
        //print("0");
        //printf() e não print()
        printf("A string não contém esta substring");
    }
    
    getch();
}

//char letra(char l[1000]; char p[25])
//Funções usam "," entre os parâmetros e não ";"
//a função retorna um int porque é para retornar a posição
int letra(char l[1000], char p[25])
{
     //char u[1025], l, p;
     //As chars l e p já estão declaradas como parâmetros,
	 //vc não deve declará-las de novo
	 
	 //char u[1025];
     char *u;
     /*a função strstr retorna um ponteiro de char, e não
      um char. Então u tem q ser declara do como um ponteiro
	 */
     
     //l=a;
     //p=b;
     /*A partir do momento em que vc chama a função letra
       "letra(a,b);" vc já está atribuindo a para o primeiro parâmetro, 
	   que é l, e b para o segundo, que é p.
	   Elas são atribuidas pela posição em que vc as coloca dentro
	   da chamada da função*/
     
	 //u= strstr(l,b);
	 u= strstr(l,p);
	 /*aqui vc deve usar as variáveis l e p que são os parâmetros que
	  a função recebeu lá no início. b foi atribuida a p anteriormente*/
	 
	 int posicao=0;
	 
	 if(u)
	 { 
	 	posicao = u - l + 1;//acrescenta 1 n posição pq a contagem do computador começa com 0
	 }
	 //se u for false é pq ele não encontrou a substring, então vai retornar 0
     return posicao;
} 

