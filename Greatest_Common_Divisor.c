#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    i=a*b;
    while(i>=1)
    {
        if(a%i==0 && b%i==0)
        {break;}
        i--;
    }
    printf("%d",i);
}