#include<stdio.h>
int main()
{
    int t,x,n;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d%d",&x,&n);
        printf("%d
",(x/10)*n);
        t--;
    }
}