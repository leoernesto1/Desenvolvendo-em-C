#include <stdio.h>

int fatorial(int n);
main()
{
	int n;
	scanf("%d", &n);
	printf("%d", fatorial(n));
}
int fatorial(int n)
{
	if(n==0) return 1; //solução trivial
	else return n*fatorial(n-1);
}
//1,2,6,24
