#include<stdio.h>
int main()
{
    int i,r,s,v,m,n;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        v=i;
        s=0;
        while(v!=0)
        {
            r=v%10;
            v=v/10;
            s=s*10+r;
        }
        if(i==s) printf("%d ",i);
    }
}