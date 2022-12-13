#include<stdio.h>
int main()
{
    float b,g;
    scanf("%f",&b);
    if (b<=10000)
    {
        g=b+(b*0.8)+(b*0.2);
        printf("%0.2f",g);
    }
    else if(b<=20000)
    {
        g=b+(b*0.9)+(b*0.25);
        printf("%.2f",g);
    }
    else if (b>20000)
    {
        g=b+(b*0.95)+(b*0.3);
        printf("%.2f",g);
    }
}