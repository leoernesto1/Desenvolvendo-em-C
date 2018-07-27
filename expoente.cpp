#include<stdio.h>
#include<conio.h>

int funcao(int n);

int main(){
	int b;
	printf("digite um valor");
	scanf("%d", &b)
	printf("%d", funcao(b));
	getch();
}

int funcao(int n){
	if (n==1){
		return n;
	}
	else{
		return funcao (n-1)*2;
	}
	
}
