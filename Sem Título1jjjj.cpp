#include<stdio.h>
#include<conio.h>

main()
{
      
      int n, m, x;
      printf("Digite um valor para o primeiro vetor\n");
      scanf("%d", &n);
      int vetor1[n];
      printf("Digite um valor para o segundo vetor\n");
      scanf("%d", &m);
      int vetor2[m];
      int vetor3[x];
      int vetor4[x];
      
      for(int i=0; i<n; i++)
      {
              vetor3[i]= i;
      } 
      
      for(int j=0; j<m; j++) || (j!= i)
      { 
               vetor4[j]= j;
      }
      printf("O vetor %d\n", vetor3);
      printf("O veotr %d\n", vetor4);
      getch();        
     
}
