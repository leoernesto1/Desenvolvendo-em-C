#include<conio.h>
#include<stdio.h>
int fun(int x, int y);
main()
{
      int a, b, r;
      printf("Digite A");
      scanf("%d", & a);
      printf("Digite b");
      scanf("%d", & b);
      r = fun(a, b);
      printf("%d\n", r);
      getch();
}
int fun(int x, int y)
{
    if(x==1)
    return y;
    if(y==1)
    return x;
    else
    return x*(y-1)+x;
}
