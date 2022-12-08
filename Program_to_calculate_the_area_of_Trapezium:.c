#include<stdio.h>
int main()
{
    float a,b,h,z;
    scanf("%f%f%f",&a,&b,&h);
    z=0.5*(a+b)*h;
    printf("%.4f",z);
}