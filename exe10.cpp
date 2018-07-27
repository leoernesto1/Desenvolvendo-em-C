#include <stdio.h>
#include <string.h>

int contar(char *str, char l);
int anagrama(char s1[50], char s2[50]);

main()
{
	char str1[50], str2[50];
	
	printf("Digite a primeira palavra\n");
	gets(str1);
	printf("Digite a segunda palavra\n");
	gets(str2);
	
	if(anagrama(str1, str2))
	{
		printf("As palavras %s e %s formam um anagrama", str1, str2);
	}
	else
	{
		printf("As palavras %s e %s nao formam um anagrama", str1, str2);
	}
}

int contar(char *str, char l)
{
	int cont=0;
	for(int i=0; i<strlen(str); i++)
	{
		if(str[i]==l)
		{
			cont+=1;
		}
	}
	return cont;
}

int anagrama(char s1[50], char s2[50])
{
	if(strlen(s1)==strlen(s2))
	{
		for(int i=0; i<strlen(s1); i++)
		{
			if(contar(s1, s1[i])!=contar(s2, s1[i]))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	return 1;
}
