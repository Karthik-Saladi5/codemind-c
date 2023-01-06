#include<stdio.h>
int main()
{
    int n,c=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0) c++;
    }
    if(c==0) printf("True");
    else printf("False");
}