#include<stdio.h>
int main()
{
    int n,i,s,a=0,b=1;
    scanf("%d",&n);
    s=a+b;
    printf("%d %d ",a,b);
    for(i=3;i<=n;i++)
    {
        printf("%d ",s);
        a=b;
        b=s;
        s=a+b;
    }
}