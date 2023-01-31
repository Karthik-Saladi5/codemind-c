#include<stdio.h>
int valid(float a,float b,float c)
{
    if ((a+b)>c && (a+c)>b && (b+c)>a)
    return 1;
    else
    return 0;
}
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    int x=valid(a,b,c);
    if (x==1)
    printf("Valid triangle");
    else
    printf("Invalid triangle");
}