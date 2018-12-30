#include<stdio.h>
int Tempertatures(float a);
int main()
{
    printf("input a num(q to quit)");

    float num;
    while(scanf("%f",&num))
    {
        char ch='q';
        if(num==ch)
            break;
        Tempertatures(num);
    }

    return 0;
}

int Tempertatures(float a)
{
    float b = 5.0/9.0*(a-32.0);
    float c = b+273.16;
    printf("摄氏温度为%.2f",b);
    printf("华氏温度为%.2f",c);
    return 0;
}
