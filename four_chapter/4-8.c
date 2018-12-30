#include<stdio.h>

int main()
{
    const float a = 3.785;
    const float b = 1.609;
    printf("input your mile");
    float mile;
    scanf("%f",&mile);
    printf("input your gas");
    float gas;
    scanf("%f",&gas);
    printf("%.1f",gas/mile);
    printf("%.1f",gas*a/(mile*b/100));
    return 0;
}
