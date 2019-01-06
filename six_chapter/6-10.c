#include<stdio.h>
#include<stdlib.h>

int main()

{
    while(1)
    {
        printf("Enter lower and upper integer limits:\n");
        int down,up;
        scanf("%d %d",&down,&up);
        if(up<=down)
        {
            printf("done");
            break;
        }

        int i,sum=0;
        for(i=down;i<=up;i++)
        {
            sum+=i*i;
        }
        printf("The sums of the squares from %d to %d is %d",down^2,up^2,sum);
    }
    return 0;
}
