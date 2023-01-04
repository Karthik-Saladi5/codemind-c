#include<stdio.h>
int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    for(i=(m*n);i>=1;i--)
    {
        if(m%i==0 && n%i==0) break;
    }
    printf("%d",i);
}