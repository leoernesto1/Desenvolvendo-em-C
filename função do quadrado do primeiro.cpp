#include<stdio.h>
#include<conio.h>
#include<stdio.h>

float buscar(float a, float b, float c);

main()
{
      float a, b, c, resultado, h;
      int g;
      printf("Digite o primeiro valor \n");
      scanf("%f", &a);
      printf("Digite o segundo valor \n");
      scanf("%f", &b);
      printf("Digite o terceiro valor \n");
      scanf("%f", &c);
      resultado= (buscar(a,b,c));
      printf("O resultado é %f", resultado);
      getch();
      }
      

float buscar(float a, float b, float c)
{
    
    float d, e;
    d=a*a;
    e=d+b+c;
    return e;
    
    
}
