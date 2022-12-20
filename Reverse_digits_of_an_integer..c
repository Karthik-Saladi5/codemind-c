#include<stdio.h>
int main()
{
    int n,r,s;
    scanf("%d",&n);
    s=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    printf("%d",s);
}