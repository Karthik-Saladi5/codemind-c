#include<stdio.h>
int main()
{
    int a,b,c,s;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        if(a<c) s=a;
        else s=c;
    }
    else
    {
        if(b<c) s=b;
        else s=c;
    }
    printf("%d",(a+b+c-s));
}