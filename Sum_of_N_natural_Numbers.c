#include<stdio.h>
int main()
{
    int n,i,res;
    scanf("%d",&n);
    i=1;
    res=0;
    while(i<=n)
    {
        res=res+i;
        i++;
    }
    printf("%d",res);

}