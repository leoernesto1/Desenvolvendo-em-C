
#include <stdio.h>
#include<conio.h>



int funcao (int x[20], int y);


int main(){
	int a[20], i, b;
	
	for(i=0; 19>=1; i++)
		{
			printf("Digite um valor para o vetor %d \n",i);
			scanf("%d, & a[i]");
		}
		
	printf("digite um numero para ser procurado");
	scanf("%d, & b");
	

	printf("%d, %d", funcao (a,b));	
	

	getch();
}

int funcao (int x[20], int y){
	int i;
	for(i=0; 20>=i; i++){
			if(x[i] == y){
				return x[i];
			}
			else {
				printf("nao");
			}	
	}
}
	
	

