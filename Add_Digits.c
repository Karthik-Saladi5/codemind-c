#include<stdio.h>
#include<math.h>
int main()
{
    int n,s,c,a;
    scanf("%d",&n);
    while(c!=1)
    {
        s=0;
        while(n!=0)
        {
        s=s+n%10;
        n/=10;
        }
        c=log10(s)+1;
        if(c!=1) n=s;
    }
    printf("%d",s);
}