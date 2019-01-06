#include<stdio.h>

int main()
{
    int i,j;
    char temp ='A';
    for(i=0;i<6;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",temp+j);

        }
        temp +=(i+1);
        printf("\n");
    }
    return 0;
}
