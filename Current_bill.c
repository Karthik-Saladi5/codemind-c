#include<stdio.h>
int main()
{
    int u;
    float b, s, tb;
    scanf("%d",&u);
    if(u<199)
    {
        b=u*1.2;
    }
    else if(u>=200 && u<400)
    {
        b=u*1.5;
    }
    else if(u>=400 && u<600)
    {
        b=u*1.8;
    }
    else
    {
        b=u*2.0;
    }
    if(b>400)
    {
        s=b*0.15;
    }
    else
    {
        s=100;
    }
    tb=b+s;
    printf("%.2f",tb);
}