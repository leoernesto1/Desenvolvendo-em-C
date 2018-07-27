//Leonardo Ernesto      9036646       Informática Biomédica
#include <stdio.h>                                              //Biblioteca
#include <conio.h>                                              //Biblioteca

main()
{
    int ndisco, contador=0, a, b, i ;                           //Declara as Variaveis
    printf("Digite o numero de disco pra Torre de Hanoi\n");    //Mostra uma menssagem na tela
    scanf("%d", &ndisco);                                       //Salva o valor em uma variavel
    for(i=1; i < (1 << ndisco); i++) {                          //Faz um loop
             a= (i&(i-1))%3 ;                                   //Faz a operação do disco
             b= ((i|(i-1))+1)%3 ;                               //Faz a operação do disco
             printf("\t Move disco de  %d para  %d\n\n", a, b); //Mostra uma menssagem na tela
             contador=contador+1;                               //Conta o numero de movimentos
        }
    printf("O numero de movimentos %d\n  ", contador);          //Mostra uma menssagem na tela
    getch();                                                    //Fixa a tela
}



/*
O usuario vai digitar o valor de ndisco, entao meu ndisco vai ser transformado para bits a movimentação
00000001 = 1 digitou 3
00001000 = 8
00000000 ^ 00000001 = 0000000/3 = 0 
00000000|| 00000001 = 000000001+00000001= 000000010/3= 0000000010 = 2



0/3=0 numero da primeira estaca
2/3= 2 numero destino ser movido





      
