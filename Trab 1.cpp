#include <stdio.h>
#include <string.h>
#include<conio.h>
#include<stdlib.h>

char letra(char l[1000]; char p[25]);

main()
  {
    char a[1000], b[25], c[1025];
    printf("Entre com a string :");
    getf(a);
    printf("Entre com a substring :");
    getf(b);
    c= letra(a,b);
    if(c)
      { 
        printf("A string cont�m a substring.\n");
        printf("A substring come�a na posi��o %d.\n",c-a);
       
      } 
    else
    {
        print("0");
    }
    
    getch();
}

char letra(char l[1000]; char p[25])
{
     char u[1025], l, p;
     l=a;
     p=b;
     u= strstr(l,b);
     return u;
} 
     
