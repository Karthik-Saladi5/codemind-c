#include<stdio.h>
void ap(int r)
{
    float a,p;
    p=2*3.14*r;
    a=3.14*r*r;
    printf("%0.2f
%0.2f",a,p);
}
int main()
{
    int r;
    scanf("%d",&r);
    ap(r);
}