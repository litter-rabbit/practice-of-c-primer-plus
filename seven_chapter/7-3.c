#include<stdio.h>

int main()
{
    int numodd =0,numeven=0,avgodd=0,avgeven =0;
    int sumodd =0,sumeven =0;
    int  ch;
    while(scanf("%d",&ch) )
    {

        if(ch == 0)
            break;
        else if(ch%2 == 0)
        {

            numeven++;
            sumeven+=ch;
            avgeven = sumeven/numeven;
        }
        else
        {
            numodd++;
            sumodd+=ch;
            avgodd = sumodd/numodd;

        }
    }

    printf("numodd is %d,avgodd is %d; numeven is %d, avgeven is %d",numodd,avgodd,numeven,avgeven);
    return 0;
}
