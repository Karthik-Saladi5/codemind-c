#include<stdio.h>
int type(int a, int b, int c)
{
    if (a==b && b==c && a==c)
    return 1;
    else if (a==b || b==c || a==c)
    return 2;
    else if (a!=b!=c)
    return 3;
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int x=type(a,b,c);
    scanf("%d%d%d",&a,&b,&c);
    if (x==1)
    printf("Equilateral triangle");
    else if (x==2)
    printf("Isosceles triangle");
    else if (x==3)
    printf("Scalene triangle");
}