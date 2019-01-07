#include<stdio.h>

int main()
{
    char ch;
    int sum=0;
    while((ch=getchar())!='#')
    {
        sum++;
        printf("%5d",ch);
        if(sum%8 == 0)
            printf("\n");
    }
    return 0;
}
