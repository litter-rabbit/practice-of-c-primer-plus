#include<stdio.h>

int main()
{
    printf("请输入你的年龄\n");
    int a;
    scanf("%d", &a);
    float  year_sec = 3.156e7;
    printf("你的年龄对应的秒数为：%e", year_sec*a);

    return 0;


}
