#include<stdio.h>

int main()
{
    printf("input times");
    int times;
    scanf("%d",&times);
    float i;
    float sum1;

    for(i=1;i<=times;i++)

    {
        sum1+=1.0/i;


    }
    printf("%f",sum1);
    return 0;
}
