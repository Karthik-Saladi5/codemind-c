#include<stdio.h>
#include<math.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        long long int n;
        scanf("%lld",&n);
        int r,k,f,sum,d;
        d=log10(n)+1;
        while(n>=0)
        {
            r=n%10;
            break;
        }
        k=pow(10,(d-1));
        f=n/k;
        sum=r+f;
        printf("%d
",sum);
    }
}