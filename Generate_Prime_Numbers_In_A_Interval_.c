#include<stdio.h>
int main()
{
    int n,i,c,a,b;
    scanf("%d%d",&a,&b);
    for(n=a+1;n<b;n++)
    {
        c=0;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            c++;
        }
    if(c==0) printf("%d
",n);
    }
}