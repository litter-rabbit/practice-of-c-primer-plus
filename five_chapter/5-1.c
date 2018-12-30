#include<stdio.h>
#define RATE 60
int main()
{
    int minutes;
    printf("input minutes ");
    printf("input a -1 to quit");

    while(scanf("%d",&minutes))

    {
        if(minutes>0)
        {
            printf("%d小时%d分",minutes/RATE,minutes%60);
        }
        else if(minutes ==-1)
            break;
        else

            printf("please input a excess zero number");

    }
    return 0;
}
