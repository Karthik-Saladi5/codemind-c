#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c,d=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        c=0;
        scanf("%d",&a[i]);
        c=log10(a[i])+1;
        if(c%2==0) d++;
    }
    printf("%d",d);
}