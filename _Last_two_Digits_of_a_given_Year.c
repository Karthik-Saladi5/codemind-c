#include<stdio.h>
void last(int a)
{
    int b;
    b=a%100;
    printf("%.2d",b);
}
int main()
{
    int a;
    scanf("%d",&a);
    last(a);
}