#include <stdio.h>
#include<conio.h>
int par(int x);
int main(){
	int a;
	printf("Digite um numero");
	scanf("%d", &a);
	printf("%d", par(a));
	getch();
}

int par(int x){
	if(x == 1){
		return 0;
	}
	else{
		return par(x-1)+2;
		
	}
}
	
	
