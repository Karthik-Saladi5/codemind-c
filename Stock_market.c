#include<stdio.h>
int main()
{
    int t,i,x,y;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&x,&y);
        if(x>y) printf("LOSS");
        else if(x<y) printf("PROFIT");
        else printf("NEUTRAL");
        printf("
");
    }
}