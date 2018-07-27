#include<stdio.h>
#include<conio.h>
int f(int a);
main()
{
      int a, c;
      printf("Digite um numero");
      scanf("%d", &a);
      c= f(a);
      printf("Os numeros são %d\n ", c);
      getch();
}     
      
int f(int a)
{
    int d;
    if(a==0){
             return 1;}
    else
    {
        d= a* f(a-1);
        return d;
    }
    

}
    
