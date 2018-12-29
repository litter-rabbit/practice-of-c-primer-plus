#include<stdio.h>

int main()
{
    printf("input your first name");
    char firstname[40];
    scanf("%s",firstname);
    printf("input your last name");
    char lastname[40];
    scanf("%s",lastname);
    printf("%s,%s",firstname,lastname);
    return 0;
}
