#include<stdio.h>
#include<conio.h>

int f(int k);
main()
{
      int a, c;
      printf("Digite um numero\n");
      scanf("%d", &a);
      c= f(a);
      printf("%d", c);
      getch(); 
      
      
}
int f(int k)
{
    if(k==1)
    return 2;
    else
    return 2*f(k-1);
}
