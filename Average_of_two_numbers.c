#include<stdio.h>
void average(float a,float b)
{
    float c;
    c=(a+b)/2;
    printf("Average of %.f and %.f is: %.2f",a,b,c);
}
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    average(a,b);
}