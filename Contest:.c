#include<stdio.h>
int main()
{
    int x,b,c,d;
    scanf("%d%d%d",&x,&b,&c);
    d=b+(c*2);
    if (x<=d)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
    
}