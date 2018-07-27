#include<stdio.h>
#include<conio.h>

int funcao(int n);

int main(){
	int b;
	printf("digite um valor");
	scanf("%d", &b);
	printf("%d", funcao(b));
	getch();
}

int funcao(int n){
	if(n==0){
		return 1;
	}
	if (n==1){
		return 2;
	}
	else{
		return funcao (n-1)*2;
	}
	
}
