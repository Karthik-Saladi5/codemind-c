#include<stdio.h>
int main()
{int x,i;
scanf("%d",&x);
for(i=1;i<=x;i++)
{

    int n,r,s,v;
    scanf("%d",&n);
    v=n;
    s=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    if(v==s)
    printf("True
");
    else
    printf("False
");
}}