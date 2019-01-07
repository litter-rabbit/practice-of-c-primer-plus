#include<stdio.h>

int main()
{
    int numblank=0,hh=0,others=0;
    char ch;
    while((ch = getchar()) != '#')
    {

        if(ch ==' ')
        {
            numblank++;
        }
        else if(ch =='\n')
        {
            hh++;
        }
        else
            others++;
    }
    printf("numblank is %d, hh is %d, other is %d",numblank,hh,others);
    return 0;
}
