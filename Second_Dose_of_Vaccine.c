#include<stdio.h>
int main()
{
    int t,i,l,d,r;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&d,&l,&r);
        if(d<=r && d>=l) printf("Take second dose now");
        else if(d>r) printf("Too Late");
        else printf("Too Early");
        printf("
");
    }
}