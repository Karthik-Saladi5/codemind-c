#include<stdio.h>
#include<math.h>
int main()
{
    int b,n,s=0,m=1,i;
    scanf("%d",&n);
    while(n!=0)
    {
        int b=n%10;
        s=s+b;
        m=m*b;
        n=n/10;
    }
    printf("%d",abs(s-m));
}