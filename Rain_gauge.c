#include<stdio.h>
int main()
{
    int t,r;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d",&r);
        if(r<3) printf("LIGHT");
        else if(r>=3 && r<7) printf("MODERATE");
        else printf("HEAVY");
        printf("
");
        t--;
    }
}