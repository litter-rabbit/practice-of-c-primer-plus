#include<stdio.h>
int triple(int a);
int main()
{
    printf("input a num\n");
    int num;
    while(scanf("%d",&num))
    {
        printf("%d triple is %d",num,triple(num));

    }
    return 0;
}

int triple(int a)
{
    int b;
    b = a*a*a;
    return b;
}
