#include<stdio.h>
int main()
{
    int n,i,s=0,p=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=p+i*i;
        s=s+i;
    }
    int a=s*s;
    if(p>=a)
    printf("%d",p-a);
    else  printf("%d",a-p);
}