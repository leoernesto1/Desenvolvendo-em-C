/* Imagine v como um vetor de inteiros, calcule: o elemento max do veotr,  a soma dos elementos e a media*/
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int maximo(int vetor[]);




main()
{
      srand(time(NULL));
      int v[10], x;
      for(int i=0; i<9; i++){
               v[i]= rand() %9;
               printf("%d\n", v[i]);
               }
      x= maximo(v);
      printf("valor%d", x);
      getch();
}
               
               
int maximo(int vetor[])

                         
    
      
      
               
               
               
               
      
      
