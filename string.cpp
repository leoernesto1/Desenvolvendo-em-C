#include <stdio.h>
#include <string.h>
#include<conio.h>

int main()
  {
    char string[20],substring[20];
    char *extrai;
    int tamanho; 

    printf("\n");
    printf("Localizando uma substring dentro da string\n");
    printf("------------------------------------------\n");
    printf("\n");
    printf("Entre com a string :");
    scanf("%s",&string);
    printf("\n");
    printf("Entre com a substring :");
    scanf("%s",&substring);
    tamanho = strlen(substring);
    extrai = strstr(string,substring);
    printf("\n");

    if(extrai)
      { 
        printf("A string cont�m a substring.\n");
        printf("A substring come�a na posi��o %d.\n",extrai-string);
        printf("A substring tem %d caracteres.\n",tamanho);
      } 
    else
      printf("A string n�o cont�m a substring.\n");

    
    getch();
}
