#include<stdio.h>
int main()
{
    int n,j=1,i;
    scanf("%d",&n);
    while(j<=n)
    {
        for(i=n;i>=1;i--)
        {
        printf("%d ",i);
        }
        printf("
");
        j++;
    }
}