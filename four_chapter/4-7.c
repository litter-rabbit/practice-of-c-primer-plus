#include<stdio.h>
#include<float.h>

int main()
{
    float a =1.0;
    float b =3.0;
    printf("%.6f\n",a/b);
    printf("%.12f\n",a/b);
    printf("%.16f\n",a/b);
    double c = 1.0/3.0;
    printf("%.6f\n",c);
    printf("%.12f\n",c);
    printf("%.16f\n",c);
    printf("%d,%d",FLT_DIG,DBL_DIG);
    return 0;

}
