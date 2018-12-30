#include<stdio.h>

int main()

{
    printf("input days");
    int days;
    while(scanf("%d",&days))
    {
        int i;
        int emp = 0;
        for(i=0;i<=days;i++)
        {
            emp+=i;
        }
        printf("%d",emp);
    }
    return 0;
}
