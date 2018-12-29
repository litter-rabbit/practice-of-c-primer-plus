#include<stdio.h>

int main()
{
    printf("input your height");
    float height;
    scanf("%f",&height);
    printf("input your name");
    char name[30];
    scanf("%s",name);
    printf("%s ,your height is %f", name,height);
    return 0;
}
