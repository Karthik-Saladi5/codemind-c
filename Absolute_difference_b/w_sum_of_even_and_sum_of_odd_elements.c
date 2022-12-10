#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s=0,y=0;;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        s=s+a[i];
       else if(a[i]%2!=0)
        y=y+a[i];
    }
    printf("%d",abs(y-s));

}