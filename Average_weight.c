#include<stdio.h>
void weight(float x, float a, float c)
{
    float b;
    b=(3*x)-a-c;
    printf("%.f",b);
}
int main()
{
    float a,c,x;
    scanf("%f%f%f",&x,&a,&c);
    weight(x,a,c);
}