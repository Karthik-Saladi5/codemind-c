#include<stdio.h>
int main()
{
    int a,x,b,c=0;
    scanf("%d%d%d",&a,&b,&x);
    while(a<=b)
    {
        a=a+x;
        c++;
    }
    printf("%d",c-1);
}