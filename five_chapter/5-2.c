#include<stdio.h>

int main()
{
    printf("input a number");
    int num;
    while(scanf("%d",&num))
    {
        int i=0;

        for(i=0;i<11;i++)
        {
            printf("%d\n",num++);
        }
    }
    return 0;
}
