#include<stdio.h>
#include<ctype.h>
int test();
int main()
{
    int a = test();
    printf("%d",a);
}
int test()
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
    return a-b/a*b;
}
