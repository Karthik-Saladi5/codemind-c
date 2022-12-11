#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a%2;
    if(b!=0)
    {
        printf("weird");
    }
    else if(b==0 && a>=2 && a<=5)
    {
        printf("not weird");
    }
    else if(b==0 && a>=6 && a<=20)
    {
        printf("weird");
    }
    else if(b==0 && a>20)
    {
        printf("not weird");
    }
}