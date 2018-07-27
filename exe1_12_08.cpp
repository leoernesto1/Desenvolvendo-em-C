#include <stdio.h>

int par(int k);

main()
{
	int n=12;
	
	printf("%d", par(n));
}

int par(int k)
{
	if(k==1) return 2;
	else return par(par(k-1)))=par(k-1)+2;
}

