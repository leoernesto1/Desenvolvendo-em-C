/*
a função de ackerman é ddefinida recursivamente sobre os inteiros nao negativos como segue:
         
         a(m,n)= n+1 se m-0
         a(m, n)=a(m-1,1) se m!=0 e n=0
         a(m,n)= a(m-1, a(m,n-1)) se m!=0, n!=0
*/
#include<conio.h>
#include<stdio.h>
int fun(int vet[], int tam, int maior)
{
    if(tam>=0)
    {
              if(vet[tam]>maior)
              {
                                maior=vet[tam];
              }
              return fun(vet, tam-1, maior); 
    }
    return maior;
}
float fmedia(int vet[], int tam, int media, int aux)
{
      if(tam>=0)
      {
                return fmedia(vet, tam-1,(media+vet[tam]),aux);
      }
      return media/aux;
}
media(N)=f(media(n-1))


float media(float vet[], int por, int tam, float mas){
      if(por<0)
      return med;
      med+=vet[por]/tam;
      return media(vet, tam-1, med)*(tam-1)/tam+vet[tem]/n;
      }
      
      
      // conta a quantidade de numeros primos
      
