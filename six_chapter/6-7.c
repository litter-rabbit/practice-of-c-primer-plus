#include<stdio.h>
#include<string.h>
int main()
{
    printf("input a word ");
    char arr[19];
    scanf("%s",arr);
    int a = strlen(arr);
    int i;
    for(i=0;i<a;i++)
    {
        printf("%c",arr[a-i-1]);
    }
    return 0;
}
