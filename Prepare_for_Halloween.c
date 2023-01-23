#include<stdio.h>
int main()
{
    int t,x,y,cho,can;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d%d",&x,&y);
        cho=x*2;
        can=y*5;
        if(cho==can) printf("Either");
        else if(cho>can) printf("Chocolate");
        else printf("Candy");
        printf("
");
        t--;
    }
}