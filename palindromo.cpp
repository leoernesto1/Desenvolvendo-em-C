/* Numeros palindromos sao aqueles que escritos da direita para a esquerda tem o mesmo valor
quando escritos da esquerda para a direita. Exemplo: 545; 789987; 97379; 123454321; etc.
Escreva um programa que verifique se um dado vetor A de 10 elementos inteiros e um palindromo,
ou seja, se o primeiro elemento do vetor e igual ao ultimo, se o segundo elemento do vetor e
igual ao penultimo e assim por diante ate verificar todos os elementos ou chegar a conclusao
que o vetor nao e um palindromo*/

#include <stdio.h>
#include<conio.h>

main()
{
  int n = 5;
  int a[n];
  int i, j, ehpalin;

  for (i=0; i<n; i++) {
    printf("Informe %2do. elemento de %d: ", (i+1), n);
    scanf("%d", &a[i]);
  }

  i = 0; // posicoes iniciais do vetor
  j = (n-1); // posicoes finais do vetor
  ehpalin = 1; // flag que indicara se o vetor eh palindromo ou nao
  while ((i < j) && (ehpalin == 1)) {
    if (a[i] != a[j])
       ehpalin = 0; // nao eh palindromo
    else {
      i = i + 1;
      j = j - 1;
    }
  }

  if (ehpalin == 1)
     printf("\nOs elementos do vetor formam um palindromo.");
  else printf("\nOs elementos do vetor \"nao\" formam um palindromo.");
  getch();
}
