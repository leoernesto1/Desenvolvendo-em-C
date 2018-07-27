#include<stdio.h>
#include<conio.h>
int fun(int a);
main()
{
      unsigned int numero, resultado;
      printf("Digite o numero");
      scanf("%d", & numero);
      resultado=fun(numero);
      printf("O numero que ocupa o lugar %d é o %d", numero, resultado);
      getch();
}
int fun(int a)
{
    int b;
    if(a==1){
             return 0;
             }
    else{
      b=fun(a-1)+2;
      return b;
      }
}
