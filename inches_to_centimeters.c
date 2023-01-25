#include<stdio.h>
void conv(float h)
{
    float cm;
    cm=2.54*h;
    printf("%.2f",cm);
}
int main()
{
    float h,cm;
    scanf("%f",&h);
    conv(h);
}