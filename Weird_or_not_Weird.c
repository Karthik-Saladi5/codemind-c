#include<stdio.h>
int wnw( int a)
{
    int b;
    b=a%2;
    if(b!=0) return 1;
    else if(b==0 && a>=2 && a<=5) return 0;
    else if(b==0 && a>=6 && a<=20) return 1;
    else if(b==0 && a>20) return 0;
}
int main()
{
    int a;
    scanf("%d",&a);
    int x=wnw(a);
    if (x==0) printf("not weird");
    else printf("weird");
}