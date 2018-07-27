//Nome: Leonardo Ernesto     9036646
#include<stdio.h>
#include<conio.h>
#include <math.h>
main()
{
   float a, b, c, d, e, a1, b1, c1, d1, e1, a2, b2, c2, d2, e2, a3, b3, c3, d3, e3, f3, a4, b4, c4, d4, e4, maior, menor; //Declaração das variaveis
   printf("Digite as cinco notas\n"); //Aparece na tela que o usuario digite os valores
   scanf("%f%f%f%f%f", &a, &b, &c, &d, &e); //Salva os valores nas variaveis

   char opcao; //Determina que a variavel opção é de um byte
   do { 
       
       printf("\n\n\nMENU\n");
       printf(" 1 - Media Aritmetica Simples\n"); //Menu
       printf(" 2 - Media Ponderada\n"); //Menu
       printf(" 3 - Desvio Padrão\n"); //Menu
       printf(" 4 - Maior Valor\n");//Menu
       printf(" 5 - Menor Valor\n");//Menu
       printf(" 6 - Leitura dos Cinco Valores\n");//Menu
       
       opcao = getch(); //A opção é digitada pelo usuario
       
       switch(opcao) { 
          case '1': // Se opção igual a 1
               a1=(a+b+c+d+e)/5; //Calcula a media
               printf("A media aritmetica \n%.3f\n", a1);// Mostra o valor da media
               break;//Para
          case '2':// Se opção igual a 2
               printf("Informe os pesos para as notas respectivamente\n"); // Pede que o usuario insira os pesos das notas
               scanf("%f%f%f%f%f", &a2, &b2, &c2, &d2, &e2);// Salva os pesos das notas
               a4=a2*a; b4=b2*b; c4=c2*c; d4=d2*d; e4=e2*e; b1=(a4+b4+c4+d4+e4)/(a2+b2+c2+d2+e2); // Faz o calculo da media ponderada
               printf("O valor da média ponderada é:\n%.3f", b1);//Mostra o valor obtido
               break;;//Para
          case '3':// Se opção igual a 3
               a1=(a+b+c+d+e)/5;//Calcula a Media
               a3=a-a1; b3=b-a1; c3=c-a1; d3=d-a1; e3=e-a1;//Faz o valor da nota menos a media
               a3=a3*a3; b3=b3*b3; c3=c3*c3; d3=d3*d3; e3=e3*e3;//Eleva ao quadrado o resultado encontrado
               f3=(a3+b3+c3+d3+e3)/5;//Soma os valores e divide pelo total de numeros
               c1=sqrt(f3); //Calcula a raiz quadrada do resultado obtido          
               printf("O Desvio Padrão\n%f", c1);// Mostra o resultado final
               break;//Para
          case '4':// Se opção igual a 4
               maior = a;//A priemria nota digitada vai para a variavel maior
               if (maior < b)//Verifica se a variavel maior é menor do que a segunda nota
               maior = b;//Caso for, maior será agora o valor de b
               if (maior < c)//Verifica se a variavel maior é menor do que a terceira nota
               maior = c;//Caso for, maior será agora o valor de c
               if (maior < d)//Verifica se a variavel maior é menor do que a quarta nota
               maior = d;//Caso for, maior será agora o valor de d
               if (maior < e)//Verifica se a variavel maior é menor do que a quinta nota
               maior = e;//Caso for, maior será agora o valor de e
               printf("\nO maior numero e: %.3f", maior);//Mostra o maior numero
               break;//Para
          case '5':// Se opção igual a 5
               menor = a;//A priemria nota digitada vai para a variavel menor
               if (menor > b)//Verifica se a variavel maior é maior do que a segunda nota
               menor = b;//Caso for, maior será agora o valor de b
               if (menor > c)//Verifica se a variavel maior é maior do que a segunda nota
               menor = c;//Caso for, maior será agora o valor de c
               if (menor > d)//Verifica se a variavel maior é maior do que a segunda nota
               menor = d;//Caso for, maior será agora o valor de d
               if (menor > e)//Verifica se a variavel maior é maior do que a segunda nota
               menor = e;//Caso for, maior será agora o valor de e
               printf("\nO numero menor e: %.3f", menor);//Mostra o menor valor
               break;//Para
          case '6': // Se opção igual a 6 
               a1=(a+b+c+d+e)/5;// Calcula a media
               printf("Informe os pesos para as notas respectivamente\n");//Pede que o usuario informe os pesos das notas
               scanf("%f%f%f%f%f", &a2, &b2, &c2, &d2, &e2);//salva esses valores
               a4=a2*a; b4=b2*b; c4=c2*c; d4=d2*d; e4=e2*e; //Multiplica os pesos pelas notas
               b1=(a4+b4+c4+d4+e4)/(a2+b2+c2+d2+e2);//Divide o resultado da soma pela soma dos pesos
               a3=a-a1; b3=b-a1; c3=c-a1; d3=d-a1; e3=e-a1;//Calcula o desvio
               a3=a3*a3; b3=b3*b3; c3=c3*c3; d3=d3*d3; e3=e3*e3;//Calcula o quadrado dos desvios
               f3=(a3+b3+c3+d3+e3)/5;//Divide a soma do quadrado dos desvios pela quantidade de notas
               c1=sqrt(f3);    //Faz a raiz quadrada
               menor = maior = a;//Atribui a v. menor e .v maior o valor da nota a
               if (maior < b)//Se maior menor que b
               maior = b;//Maior passa a ter o valor de b
               if (menor > b)//Se menor maior que b
               menor = b;//Menor passa a ser b
               if (maior < c)//Se maior menor que c
               maior = c;//Maior passa a ser c
               if (menor > c)//Se menor for maior que c
               menor = c;//Menor passa a ser c
               if (maior < d)//Se maior menor que d
               maior = d;//Maior passa a ser d
               if (menor > d)//Se menor maior que d
               menor = d;//Menor passa a ser d
               if (maior < e)//Se maior menor que e
               maior = e;//Maior passa a ser e
               if (menor > e)//Se menor maior que e
               menor = e;//Menor passa a ser e
               d1=maior;//d1 passa a ter o valor da variavel maior
               e1=menor;//e1 passa a ter o valor da variavel menor
               
               printf(" Media simples %.3f\n Media Ponderada %.3f\n Desvio Padrão %f\n Maior Numero %.3f\n Menor Numero %.3f", a1, b1, c1, d1, e1);//Mostra os valores das opções 1, 2, 3, 4, 5 do menu
               break;//Para
               
          default: // Se opção nao corresponde aos numeros do menu
               printf("Opcao Invalida\n"); // Aparece na tela
               break;
       }
       printf("\nVoltar ao menu? (s/n):"); // Sempre apos realizar o processamento do menu
       opcao = getch(); // Insere um byte
   }while(opcao == 's' || opcao == 'S'); // Se o caractere é igual a s ou S, volta ao menu, caso contrario o programa fecha
 
}
