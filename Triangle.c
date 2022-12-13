#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a==b && b==c && a==c)
    {
        printf("Equilateral triangle");
    }
    else if (a==b || b==c || a==c)
    {
        printf("Isosceles triangle");
    }
    else if (a!=b!=c)
    {
        printf("Scalene triangle");
    }
}