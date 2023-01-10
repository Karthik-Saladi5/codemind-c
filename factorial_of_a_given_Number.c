#include<stdio.h>
int main()
{
    int i,n,res;
    scanf("%d",&n);
    i=n;
    res=1;
    while(i>=1)
    {
        res=res*i;
        i--; 
    }
    printf("%d",res);
}