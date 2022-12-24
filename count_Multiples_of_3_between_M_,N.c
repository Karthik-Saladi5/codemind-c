#include<stdio.h>
int main()
{
    int mn,mx,i,c=0;
    scanf("%d%d",&mn,&mx);
    for(i=mn;i<=mx;i++)
    {
        if(i%3==0)
        {
            c++;
        }
    }
    printf("%d",c);
}