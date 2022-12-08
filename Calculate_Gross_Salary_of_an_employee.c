#include<stdio.h>
int main()
{
    float b,hra,da,pf,g;
    scanf("%f%f%f",&b,&hra,&da);
    pf=0.12*b;
    g=b+hra+da+pf;
    printf("%0.2f
%0.2f",pf,g);
}