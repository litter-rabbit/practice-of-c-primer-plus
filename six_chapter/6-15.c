#include<stdio.h>
#include<string.h>
int main()
{
    char arry[255];
    printf("input content");
    scanf("%s",arry);
    int a = strlen(arry);
    int i;
    for(i=a;i>=0;i--)
    {
        printf("%c",arry[i]);
    }
    return 0;
}
