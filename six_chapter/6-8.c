#include<stdio.h>
#include<ctype.h>

int main()
{
    int a,b;
    while(1)
    {
        printf("input first number\n");
        scanf("%d",&a);
        printf("input second number\n");
        scanf("%d",&b);
        if(!(isdigit(a)&&isdigit(b)))
        {

            printf("%d\n",a-b/a*b);
        }
        else
            printf("restart input");
    }
    return 0;
}
