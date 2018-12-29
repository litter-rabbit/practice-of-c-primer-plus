#include<stdio.h>

int main()
{
    printf("input your firstname");
    char firstname[30];
    int a = scanf("%s",firstname);
    printf("input your lastname");
    char lastname[30];
    int b = scanf("%s",lastname);
    printf("%s %s\n",firstname,lastname);
    printf("%*d %*d",a,a,b,b);
    return 0;


}
