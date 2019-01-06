#include<stdio.h>

int main()
{
    printf("input a char\n");
    char alpet;
    scanf("%c",&alpet);
    int i,j;
    printf("input number of line\n");
    int b;
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
       //打印空格
       for(j=0;j<b-1-i;j++)
       {
           printf(" ");
       }
       //以升序打印字母
       for(j=0;j<=i;j++)
       {
            printf("%c",alpet+j);

       }
       //以降序打印字母
       for(j=0;j<i;j++)
       {
           printf("%c",alpet+i-j-1);
       }
       for(j=0;j<b-1-i;j++)
       {
           printf(" ");
       }
       printf("\n");
    }
    return 0;
}
