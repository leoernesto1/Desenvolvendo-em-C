//Leonardo Ernesto                  9036646    Inform�tica Biom�dica
#include<stdio.h>                               //Biblioteca
#include<stdlib.h>                              //Biblioteca
#include<conio.h>                               //Biblioteca
#include<time.h>                                //Biblioteca

main()
{
      
      unsigned int n, m, t=1;                   //Declara��o de variaveis positivas
      unsigned int *veta, *vetb, *veti;         //Declara��o de ponteiros
      
      printf("Digite a qntd do primeiro vetor: ");           //Mostra na tela uma menssagem
      scanf("%d", &n);                                       //Salva a informa��o na variavel
      
      printf("Digite a qntd do segundo vetor: ");            //Mostra na tela uma menssagem
      scanf("%d", &m);                                       //Salva a informa��o na variavel
      
      srand(time(NULL));                                     //Gera numeros aleatorios
      
      veta = new unsigned int[n];                            //Reserva um lugar na memoria do veotr
      printf ("VETA = {");                                   //Mostra uma menssagem na tela
      for (unsigned int i=0; i < n; i++) {                   //Faz um loop de n vezes gerando a cada loop um numero aleatorio positivo
          veta[i] = rand() % 10;                            
          printf ("%d,", veta[i]);
      }
      printf ("}\n");                                        //Mostra na tela uma menssagem
      
      vetb = new unsigned int[m];                            //Reserva um lugar na memoria do vetor
      printf ("VETB = {");                                   //Mostra uma menssagem na tela
      for (unsigned int i=0; i < m; i++) {                   //Faz um loop de m vezes gerando a cada loop um numero aleatorio positivo
          vetb[i] = rand() % 10;
          printf ("%d,", vetb[i]);
      }
      printf ("}\n");                                        //Mostra uma menssagem na tela
      
      veti = new unsigned int[t];                            //Reserva um lugar na memoria para o vetor
      for (unsigned int a=0; a < n; a++)                     //Faz um loop
          for (unsigned int b=0; b < m; b++)                 //Faz um loop
              if (veta[a] == vetb[b]) {                      //Se algum valor de a tenha semelhan�a em b
                 bool exist = false;                         //Express�o booleana
                 for (unsigned int i=0; i < t; i++)          //Faz um loop
                     if (veta[a] == veti[i]){                //Se algum valor de a tenha semelhan�a em i, mas que ja tenha sido salvo no vetor t
                                 exist = true;               //Express�o booleana
                                 break;                      //Para o loop
                     }
                 if (!exist) {                               //Se diferente de true
                             veti = (unsigned int*)realloc(veti, sizeof(unsigned int)*t);           // O valor sera realocado 
                             veti[t-1] = veta[a];                                                   //Salva o vetor 
                             printf("Interse��o %d\n", veti[t-1]);                                  //Mostra a interse��o na tela
                             t += 1;                                                                //Avan�a para preparar o proximo valor para o veotr
                 }
              }
              
      
      getch();                                                                                      //Fixa a tela
     
}
      
