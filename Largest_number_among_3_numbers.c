#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d",a);
        }
        else//c>a
        {
            printf("%d",c);
        }
    }
    else//a<b
    {
        if(b>c)
        {
            printf("%d",b);
        }
        else//b<c
        {
            printf("%d",c);
        }
    }
}