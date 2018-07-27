#include <stdio.h>
#include<conio.h>

int i;
void towers(int n, char frompeg, char topeg, char auxpeg);

main()
{
	int n;
	i=0;
	scanf("%d", &n);
	towers(n,'A','B','C');
	printf("\n%d", i);
	getch();
}
void towers(int n, char frompeg, char topeg, char auxpeg)
{
	if(n==1)
	{
		printf("\n%s%c%s%c", "Move disco 1 da estaca ", frompeg," p/ a estaca ", topeg);
		return;
	}
	i++;
	towers(n-1,frompeg,auxpeg,topeg);
	printf("\n%s%d%s%c","Move o disco ", n, " da estaca ", frompeg, " p/ a estaca ",topeg);
	i++;
	towers(n-1,auxpeg,topeg,frompeg);
}

