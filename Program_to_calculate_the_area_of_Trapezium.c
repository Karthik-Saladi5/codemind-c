#include<stdio.h>
void area(float a,float b,float h)
{
    float x;
    x=0.5*h*(a+b);
    printf("%.4f",x);
}
int main()
{
    float a,b,h;
    scanf("%f%f%f",&a,&b,&h);
    area(a,b,h);
}