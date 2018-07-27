//numeros naturais multiplicação
#include<stdio.h>
#include<conio.h>
int fun(int a, int b);
main()
{
      int numero1, numero2, resultado;
      printf("Digite o primeiro numero");
      scanf("%d", & numero1);
      printf("Digite o primeiro numero");
      scanf("%d", & numero2);
      resultado=fun(numero1, numero2);
      printf("%d", resultado);
      getch();
}
int fun(int a, int b)
{
    int num;
    if(a==1){ return b;}
    if(b==1){ return a;}
    if(a==0 || b==0){ return 0;}
    else{
         num= a*(b-1)+a;
         return num;
         }
    
}
