#include<stdio.h>

int main()
{
    int arry[10];
    int i;
    for(i=0;i<8;i++)
    {
        printf("input a number");
        scanf("%d",&arry[i]);
    }
    for(i=0;i<8;i++)
    {
        printf("%d",arry[7-i]);
    }
    return 0;
}
