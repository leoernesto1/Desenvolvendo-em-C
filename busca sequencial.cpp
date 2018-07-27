//Algoritmo recursivo para busca sequencial
#include<stdio.h>                              
#include<stdlib.h>                             
#include<conio.h>                               
#include<time.h>  

int busca(int vet[], int max, int val);
main()
{
      int vetor[100], z, k;
      srand(time(NULL));      
      for (int i=0; i < 99; i++){
      vetor[i] = rand() % 10;
      printf("%d\n", vetor[i]);}
      printf("Digite uma lugar");
      scanf("%d", & z);
      k = busca( vetor, 100 , z);
      if(k==-1){
                printf("O numero não foi encontrado");
                }
      else{
           printf("%d", k);
           }
      getch();
      
     
}

int busca(int vet[], int max, int val)
{
    for(int i=0; i<= max; i++)
            if(vet[i]==val)
    return i;
    return -1;
}
  
  
