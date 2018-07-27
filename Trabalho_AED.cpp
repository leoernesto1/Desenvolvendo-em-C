#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<cstdlib>

int main(){
	int coluna = 200;
	int linha = 200;
	int a[coluna][linha]; //Matriz de adjacencia
	int b =20; // numero de nos
	int c =4; // comunidade
	int no1, no2; //nso que irao se conectar
	float Pin, Pout;
	
	Pin = 0,9;//probabilidade de conexao intracomunidade
	Pout = 0;//Probabilidade de conexao intracomunidade
	
	for(int i=0; i< b; i++){
		for (int j=0; j< b; j++){
			a[i][j] = 0;
		}
			
	}
	srand (time(NULL)); //Semente de numeros aleatorios
	
	no1 = (rand() % b);//Valor aleatorio para os nos
	printf("%d \t %d\n", no1, no1/(b/c)+1);
	
	//no2 = (rand() % 200);
	//printf("%d \n %d\n", no2, no2/(b/c)+1);
	
	do{
		
		no2 = (rand() % b); //sorteia segundo no
		printf("%d \t %d\n", no2, no2/(b/c)+1);
		
	}while(no1/(b/c) != no2/(b/c) || no1==no2); // confere se ele esta na mesma comunidade
	
	if(rand() % 100+1 <= Pin*100){
		//conecta nos
		a [no1][no2] = 1;
		a [no2][no1] = 1;
		printf("ok");	
	} 
	
	
	
	
	
	
	getch();		
			
}

