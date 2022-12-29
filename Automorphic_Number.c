#include<stdio.h>
int main()
{
    int n,sq,c=1,v;
    scanf("%d",&n);
    v=n;
    sq=n*n;
    while(n!=0)
    {
        c*=10;
        n/=10;
    }
    if (sq%c==v) printf("Automorphic Number");
    else printf("Not an Automorphic Number");
}