
#include <stdio.h>
#include<conio.h>

int soma(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    {
        return a + soma(a-1);
    }
}

main()
{
    int a;
    scanf("%d",&a);
    printf("%d", soma(a));
    getch();
}
