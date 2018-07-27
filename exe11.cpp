#include <stdio.h>
#include <string.h>
#include<conio.h>

int buscar(char s1[50], char s2[50]);

main()
{
	char str1[50], str2[50];
	strcpy(str1, "testando essa merda");
	//get(str1);
	strcpy(str2, "tes");
	//get(str2);
	
	if(buscar(str1, str2))
	{
		printf("A substring inicia em: %d", buscar(str1, str2));
	}
	else
	{
		printf("Substring inexistente");
	}
	getch();
}

int buscar(char s1[50], char s2[50])
{
	char *extrai;
	extrai = strstr(s1,s2);

    if(extrai)
    {
    	return extrai-s1+1;
    	getch();
    } 
    else
    {
    printf("do nothing");
    getch();
    }
}
