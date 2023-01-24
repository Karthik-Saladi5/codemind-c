#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    if(n%(m*k)==0) printf("%d",n/(m*k));
    else printf("%d",n/(m*k)+1);
}