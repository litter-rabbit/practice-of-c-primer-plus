#include<stdio.h>
#include<math.h>
int main()
{
    int arry[8];
    int i=0;
    for(i=0;i<8;i++)
    {
        arry[i]=pow(2,i);
    }
    i = 0;
    do
    {
        printf("%d\n",arry[i]);
        i++;
    }
    while(i<8);

    return 0;
}
