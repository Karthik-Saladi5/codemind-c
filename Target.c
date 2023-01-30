#include<stdio.h>
int target(int p, int q, int r, int s)
{
if (p>=10 && q>=10 && r>=10 && s>=10)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int main()
{
    int p,q,r,s;
    scanf("%d%d%d%d",&p,&q,&r,&s);
    int x=target(p,q,r,s);
    if(x==1)
    printf("YES");
    else
    printf("NO");
}