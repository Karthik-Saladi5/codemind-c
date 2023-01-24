#include<stdio.h>
int main()
{
    int a1,a2,a3,b1,b2,b3,c,d;
    scanf("%d%d%d%d%d%d%d%d",&d,&c,&a1,&a2,&a3,&b1,&b2,&b3);
    int a,b,t1,t2;
    a=a1+a2+a3;
    b=b1+b2+b3;
    t1=a+b+c; 
    t2=a+b+d+d; 
    if(a>=150 && b>=150)
    {
        if(t1<t2) printf("YES");
        else printf("NO");
    }
    else if(a>=150 || b>=150)
    {   t1=a+b+c+d;
        if(t1<t2) printf("YES");
        else printf("NO");
    }
    else printf("NO");
}