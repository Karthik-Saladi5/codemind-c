#include<stdio.h>
void capacity(int s, int t, int b)
{
    int c,k;
    c=2*s*t*b*512;
    k=c/1024;
    printf("%d KB",k);
}
int main()
{
    int s,t,b,y,k;
    scanf("%d%d%d",&s,&t,&b);
    capacity(s,t,b);
}