#include<stdio.h>
int main()
{
    int x,y,a,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&x,&y,&a);
        if(a>=x && a<y) printf("YES");
        else printf("NO");
        printf("
");
    }
}