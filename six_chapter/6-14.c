#include<stdio.h>

int main()
{
    double arry1[8];
    double arry2[8];
    int i,j;
    for(i=0;i<8;i++)

    {
        printf("input numble of %d ",i+1);
        scanf("%lf",&arry1[i]);
    }
    for(i=0;i<8;i++)
    {
        for(j=0;j<i+1;j++)
        {
            arry2[i]+=arry1[j];
        }

    }
    for(i=0;i<8;i++)

    {
        printf("%-5f\n",arry1[i]);
        printf("%-5f\n",arry2[i]);

    }
    return 0;
}
