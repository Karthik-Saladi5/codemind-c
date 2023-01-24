#include<stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if(x<y) printf("%d",(x*k)+x*(n-k));
    else printf("%d",(x*k)+y*(n-k));
}