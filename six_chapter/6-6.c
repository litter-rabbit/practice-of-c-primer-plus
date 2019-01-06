#include<stdio.h>

int main()
{
    printf("input a limit of line");
    int limit;
    scanf("%d",&limit);
    int i;
    printf("number    number^2    number^3\n");
    for (i=0;i<limit;i++)
    {
        printf("%-10d%-10d%-10d\n",i,i*i,i*i*i);

    }
    return 0;
}
