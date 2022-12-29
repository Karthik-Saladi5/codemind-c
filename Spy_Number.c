#include<stdio.h>
int main()
{
    int b,n,s=0,m=1,i;
    scanf("%d",&n);
    while(n!=0)
    {
        int b=n%10;
        s=s+b;
        m=m*b;
        n=n/10;
    }
    if (m==s) printf("Spy Number");
    else printf("Not Spy Number");
}