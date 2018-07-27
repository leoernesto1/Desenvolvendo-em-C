#include<stdio.h>
#include<string.h>
#include<conio.h>

int letra(char l[1000], char p[25]);

main()
  {
    char a[1000], b[25];
    int c;
    printf("Entre com a string :");
    gets(a);
    printf("Entre com a substring :");
    gets(b);
    c = letra(a,b);
    if(c)
      { 
        printf("A string contém a substring.\n");
        printf("A substring começa na posição %d.\n",c);
      } 
    else
    {
        printf("0");
    }
    
    getch();
}

int letra(char l[1000], char p[25])
{
     char *u;
	 u= strstr(l,p);
	 int posicao=0;
	 if(u)
	 { 
	 	posicao = u - l + 1;
	 }
     return posicao;
} 

