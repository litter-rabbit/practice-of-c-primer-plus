#include<stdio.h>

int main()
{
    float primitive = 100;
    float Da;
    float Di=100;
    int i=0;
    while(1)
    {
        Da = primitive*(i*0.1+1);

        Di = Di*(i*0.05+1);
        if(Di>Da)
            break;
        i++;
    }
    printf("need %d years Daphne is %f    Dephne is %f",i,Da,Di);
    return 0;
}
