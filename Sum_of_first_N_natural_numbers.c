#include<stdio.h>
void sum( int n)
{
    int m;
    m=0.5*n*(n+1);
    printf("%d",m);
}
int main()
{
    int n;
    scanf("%d",&n);
    sum(n);
}