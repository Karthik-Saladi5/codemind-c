#include<stdio.h>
int main()
{
    int a,b,r,i;
    scanf("%d%d",&a,&b);
    i=1;
    while(i<=b)
    {
        r=a*i;
        if(r%b==0)
        {
            printf("%d",r);
            break;
        }
        i++;
    }
}