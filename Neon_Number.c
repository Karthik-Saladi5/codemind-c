#include<stdio.h>
int main()
{
    int s=0,n,sq,i;
    scanf("%d",&n);
    sq=n*n;
    while(sq!=0)
    {
        s=s+sq%10;
        sq/=10;
    }
    if(s==n) printf("Neon Number");
    else printf("Not Neon Number");
}