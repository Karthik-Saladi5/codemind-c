#include<stdio.h>
#include<math.h>
int main()
{
    int n,c,r,i=0;
    scanf("%d",&n);
    c=log10(n)+1;
    int a[c];
    while(n!=0)
    {
        r=n%10;
        a[i]=r;
        i++;
        n/=10;
    }
    int max=a[0];
    for(i=0;i<c;i++)
    {
        if(max<a[i]) max=a[i];
    }
    printf("%d",max);
}