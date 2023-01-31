#include<stdio.h>
int big(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        return 1;
        else
        return 2;
    }
    else
    {
        if(b>c)
        return 3;
        else
        return 4;
    }
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int x=big(a,b,c);
    if(x==1)
    printf("%d",a);
    else if (x==2)
    printf("%d",c);
    else if(x==3)
    printf("%d",b);
    else if (x==4)
    printf("%d",c);
 }