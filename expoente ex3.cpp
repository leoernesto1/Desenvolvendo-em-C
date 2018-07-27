#include<stdio.h>
#include<conio.h>
int fun(int a);
main()
{
      unsigned int numero, resultado;
      printf("Digite o expoente");
      scanf("%d", & numero);
      resultado=fun(numero);
      printf("O numero eh %d", resultado);
      getch();
}
int fun(int a)
{
    int b;
    if(a==1){
             return 2;
             }
    else if(a==0){
         return 1;
         }
    else{
      b= 2* fun(a-1);
      return b;
      }
}
