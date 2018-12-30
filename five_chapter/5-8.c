#include<stdio.h>

int main()
{
    printf(" This program conputers modill");
    printf("Enter an integer to serve as the second operand:");
    int integer;
    scanf("%d",&integer);
    while(1)
    {
        printf("Now enter the first operand(<=0 to quit):");
        int operand;
        scanf("%d",&operand);
        if (operand<=0)
            break;
        printf(" %d  256 is %d",operand,operand%integer);

    }
    return 0;
}
