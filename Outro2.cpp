#include <stdio.h>
#include <cstdlib>
#include <time.h>

main()
{
  int N = 2000;//n�mero de n�s
  int M = 4;//n�mero de comunidades
  int K = 16; //n�mero m�dio de conex�es
  int no1, no2;//n�s
  float Pin, Pout;
  int conexoes = 0;//N�mero de conex�es
  
   Pin = 0.9;//Probabilidade de conexao intracomunidade
   Pout = 0.4;//Probabilidade de conexao intercomunidade
  
  int MA[N][N];//matriz de adjac�ncia
  
  //Esvaziar matriz de adjac�ncia
  for(int i = 0; i<N; i++)
     for(int j = 0; j<N; j++)
	    MA[i][j] = 0;
		
   srand(time(NULL)); //semente de n�meros aleat�rios
   
   while(conexoes<K*N)
   {
	   //Conexao intracomunidade
	   no1 = rand()%N;//sortear primeiro n�
	
	   //sorteia um novo n� at� que os n�s sejam da 
	   //mesma comunidade e diferentes entre si
	   do
	   {
	      no2 = rand()%N;//sortear segundo n�
	   }while(no1/(N/M)!=no2/(N/M) || no1==no2);
	
	   //Conectar n�s
	   if(rand()%100+1 <= Pin*100)
	   {
	      MA[no1][no2] = 1;
	      MA[no2][no1] = 1;
		  conexoes+=2;
		}
		
		//Conexao intercomunidade
	   no1 = rand()%N;//sortear primeiro n�
	
	   //sorteia um novo n� at� que os n�s sejam de 
	   //comunidade diferentes
	   do
	   {
	      no2 = rand()%N;//sortear segundo n�
	   }while(no1/(N/M)==no2/(N/M));
	
	   //Conectar n�s
	   if(rand()%100+1 <= Pout*100)
	   {
	      MA[no1][no2] = 1;
	      MA[no2][no1] = 1;
		  conexoes+=2;
		}
	}
	
	//Exibir matriz de adjac�ncia
	for(int i = 0; i<N; i++)
	{
      for(int j = 0; j<N; j++)
	  {
	    printf("%d ",MA[i][j]);
	  }
	  printf("\n");
	}
	
	
/*1 let dist be a |V| � |V| array of minimum distances initialized to 8 (infinity)
2 for each vertex v
3    dist[v][v] ? 0
4 for each edge (u,v)
5    dist[u][v] ? w(u,v)  // the weight of the edge (u,v)
6 for k from 1 to |V|
7    for i from 1 to |V|
8       for j from 1 to |V|
9          if dist[i][j] > dist[i][k] + dist[k][j] 
10             dist[i][j] ? dist[i][k] + dist[k][j]
11         end if*/

	int distancia[N][N];
	   
	for(int i=0; i<N; i++)
	   for(int j=0; j<N; j++)
	     if(MA[i][j]==1)
		   distancia[i][j] = 1;
		else
		   distancia[i][j] = -1;
	
	for(int i=0; i<N; i++)
	   distancia[i][i] = 0;
	   
	for(int k = 0; k<N; k++)
	   for(int i=0; i<N; i++)
	      for(int j=0; j<N; j++)
	         if((distancia[i][j]>distancia[i][k]+distancia[k][j] ||
	           distancia[i][j]==-1) &&
			   distancia[i][k] > 0 &&
			   distancia[k][j] > 0 )
			   distancia[i][j] = distancia[i][k]+distancia[k][j];
		   
	//Exibir matriz de dist�ncia
	for(int i = 0; i<N; i++)
	{
      for(int j = 0; j<N; j++)
	  {
	    printf("%d ",distancia[i][j]);
	  }
	  printf("\n");
	}
	
	
	//Encontrar excentricidade de cada n�
	int excentricidade[N];
	
	for(int i = 0; i<N; i++)
	{
	  excentricidade[i] = 0;
	}
	 printf("Excentricidade:\n");
	 
	for(int i =0; i<N; i++)
	{
	   for(int j=0; j<N; j++)
	   {
	      if(excentricidade[i]<distancia[i][j])
		     excentricidade[i] = distancia[i][j];
		  
	   }
	   printf("%d ", excentricidade[i]);
	}
	
	
	//Encontrar raio e di�metro de cada n�
	int raio, diametro;
	
	raio = excentricidade[0];
    diametro = 0;
	
	for(int i=0; i<N; i++)
	{
	   if(excentricidade[i]<raio)
	      raio = excentricidade[i];
		  
	   if(excentricidade[i]>diametro)
	      diametro = excentricidade[i];
	}
	
	printf("\nRaio: %d;\nDiametro: %d", raio, diametro);

}

