#include <stdio.h>

int main()
{
    printf("输入夸脱数：  如7");
    int a;
    scanf("%d", &a);
    int grim_a = 950;
    float water_m = 3.0e-23;
    printf("一共有%e分子", a*grim_a/water_m);

    return 0;
}
