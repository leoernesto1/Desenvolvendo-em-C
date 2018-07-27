#include <stdio.h>

int fibonacci(int n);
main()
{
	int n;
	scanf("%d", &n);
	printf("%d", fibonacci(n));
}
int fibonacci(int n)
{
	if ((n == 1)||(n==2)) return (1);
	else return (fibonacci(n-1) + fibonacci(n-2));
}
//0,1,1,2,3,5,8,13,21,34,55
