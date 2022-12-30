#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sqrut,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sqrut=sqrt(a[i]);
        if(a[i]==sqrut*sqrut)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}