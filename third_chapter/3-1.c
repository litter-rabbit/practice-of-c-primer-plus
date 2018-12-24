#include<stdio.h>

int main()
{
    int max_int = 2147483647;
    float max_float = 3.4e20;
    float min_float = -3.1234e-40;
    printf("整数向上溢出%d  %d\n",max_int, max_int+1);
    printf("浮点数向上溢出%e  %e\n",max_float, max_float+1);
    printf("浮点数向下溢出%e  %e\n",min_float, min_float/10);

    return 0;



}
