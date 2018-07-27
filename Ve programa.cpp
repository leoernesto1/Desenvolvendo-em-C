#include<stdio.h>
#include<conio.h>

int f(int k);
main()
{
      int x, a;
      printf("Digite um numero");
      scanf("%d", &x);
      a = f(x);
       printf("%d", a);
       getch();
     
      }
      
      
      
      
      
int f(int k)
{
    if(k==1)
    return 2;
    else
    return 2*f(k-1);
}
