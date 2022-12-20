#include<stdio.h>
int main()
{
    int a,i,r;
    scanf("%d",&a);
    r=0;
    i=1;
    while(i<a)
    {
        if(a%i==0)
        r=r+i;
        i++;
    }
    printf("%d",r);
}