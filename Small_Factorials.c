#include<stdio.h>
int main()
{
    int t,i,p,n;
    scanf("%d",&t);
    while(t!=0)
    {
        p=1;
        scanf("%d",&n);
        for(i=n;i>1;i--)
        {
            p*=i;
        }
        printf("%d
",p);
        t--;
    }
}