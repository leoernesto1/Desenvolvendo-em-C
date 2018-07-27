// criar um programa que receba um nome como parâmetro e retorne quais letras são vogais e quais são constantes. usar uma função que verifica se é uma vogal
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

char fun( char n[15])
{
	char b[15], c[15];
	
     for(int i=0; i<=14; i++){
     	//if(n[i]== 'a'|| 'e'||'i'||'o'||'u'){
     	//	b[i]= n[i];
     	//	printf("%s", b[i]);
     	printf("%s", n[i]);
     	 }
     	 /*if(n[i]== 'e'|| n[i]=='E'){
     		b[i]= n[i];
     	 }
     	 if(n[i]== 'i'|| n[i]=='I'){
     		b[i]= n[i];
     	 }
     	 if(n[i]== 'o'|| n[i]=='O'){
     		b[i]= n[i];
     	 }
     	 if(n[i]== 'u'|| n[i]=='U'){
     		b[i]= n[i];
     	 }*/
     	 //else{
     	 //	c[i]=n[i];
		 // }
	/*
	for(int y=0; y<=14; y++){
		printf("As vogais são: %s \n ", b[y]);
	}
	for(int x=0; x<=14; x++){
		printf("As consoantes são: %s \n", c[x]);
	}
	 */
	getch();
}

main()
{
      char letra[15];
      printf("Digite uma palavra\n");
      gets(letra);
      
      fun(letra);
 
}
