#include<stdio.h>
#define RATE 7
int main()
{
    int days;
    printf("input days ");
    printf("input a -1 to quit");

    while(scanf("%d",&days))

    {
        if(days>0)
        {
            printf("%d days is %d weeks,%d days",days,days/RATE,days%7);
        }
        else if(days ==-1)
            break;
        else

            printf("please input a excess zero number");

    }
    return 0;
}
