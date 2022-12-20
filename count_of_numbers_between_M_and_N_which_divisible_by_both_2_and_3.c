#include<stdio.h>
int main()
{
    int mn,max,i,a,c;
    c=0;
    scanf("%d%d",&mn,&max);
    for(i=mn;i<=max;i++)
    {
        if(i%6==0)
        {
         c++;
        }
    }
    printf("%d",c);
}