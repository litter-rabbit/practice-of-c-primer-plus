#include<stdio.h>

int main()
{
    char firstname[30];
    char lastname[30];
    printf("input your firstname");
    int a;
    a=scanf("%s",firstname)+3;
    printf("%d",a);
    getchar();
    printf("input your lastname");
    int b;
    b=scanf("%s",lastname)+3;
    printf("\"%s,%s\"\n",firstname,lastname);
    printf("\"%20s,%20s\"\n",firstname,lastname);
    printf("\"%-20s,%20s\"\n",firstname,lastname);
    printf("%*s,%*s\n",a,firstname,b,lastname);
    return 0;



}
