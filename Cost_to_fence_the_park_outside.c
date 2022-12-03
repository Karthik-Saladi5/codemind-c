#include<stdio.h>
int main()
{
    int l,b,w,c,a,r;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a=(((l+w+w)*(b+w+w))-(l*b));
    r=a*c;
    printf("%d",r);
    return 0;
}