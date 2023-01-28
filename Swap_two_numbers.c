#include<stdio.h>
void change(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d
%d",a,b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    change(a,b);
}