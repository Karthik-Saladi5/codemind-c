#include<stdio.h>
int main()
{
    float u;
    float b, s,c, tb;
    scanf("%f",&u);
    if(u<199)
    {
        c=1.2;
        b=u*1.2;
    }
    else if(u>=200 && u<400)
    {
        c=1.4;
        b=u*1.4;
    }
    else if(u>=400 && u<600)
    {
        c=1.6;
        b=u*1.6;
    }
    else if(u>=600 && u<800)
    {
        c=1.8;
        b=u*1.8;
    }
    else
    {
        c=2;
        b=u*2;
    }
    if(b>400)
    {
        s=b*0.15;
    }
    tb=b+s;
    printf("Units Consumed: %0.f
Cost per Unit: %0.2f
Bill: %0.2f
Surcharge: %0.2f
Total Amount: %0.2f",u,c,b,s,tb);
}