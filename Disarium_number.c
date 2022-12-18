#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,p,s=0,c,v;
    scanf("%d",&n);
    v=n;
    c=log10(n)+1;
    while(n!=0)
    {
        i=n%10;
        p=pow(i,c);
        s=s+p;
        c--;
        n=n/10;
    }
    if(s==v) printf("True");
    else printf("False");
}