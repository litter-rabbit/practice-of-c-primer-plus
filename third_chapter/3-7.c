#include<stdio.h>
int main()
{
    float hight;
    printf("请输入身高");
    scanf("%f",&hight);
    float rate = 2.54;
    printf("英寸为%f",hight/rate);

    return 0;

}
