#include<stdio.h>
void one_three();
void two();
void three();
int main()
{
    printf("start now\n");
    one_three();
    two();
    three();
    printf("done");
    return 0;


}

void one_three()
{
    printf("one\n");
}


void two()
{
    printf("two\n");
}


void three()
{
    printf("three\n");
}
