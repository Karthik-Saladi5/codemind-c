#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,s=0,p=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=--n;i>=0;i--)
    {
        s=s+(a[i]*pow(2,p));
        p++;
    }
    printf("%d",s);
    
}