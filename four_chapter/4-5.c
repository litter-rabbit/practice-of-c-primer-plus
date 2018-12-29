#include<stdio.h>

int main()
{
    printf("input downloadspeed");
    float speed;
    scanf("%f",&speed);
    printf("input size of file");
    float filesize;
    scanf("%f",&filesize);
    printf("at %.2f per second, a file of %.2f megabytes\ndownload in %.2f seconds",speed,filesize,filesize*8/speed);
}
