// criar um programa que receba um nome como par�metro e retorne quais letras s�o vogais e quais s�o constantes. usar uma fun��o que verifica se � uma vogal
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
		printf("As vogais s�o: %s \n ", b[y]);
	}
	for(int x=0; x<=14; x++){
		printf("As consoantes s�o: %s \n", c[x]);
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
