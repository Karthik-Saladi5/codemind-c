#include<stdio.h>
int day(int x)
{
if (x==1)
    return 1;
    else if (x==2)
   return 2;
    else if (x==3)
    return 3;
    else if (x==4)
   return 4;
    else if (x==5)
    return 5;
    else if (x==6)
    return 6;
    else if (x==7)
    return 7;
    else
    return 0;
}
int main()
{
    int x;
    scanf("%d",&x);
    int a=day(x);
    if (a==1)
    printf("monday");
    else if (a==2)
    printf("tuesday");
    else if (a==3)
    printf("wednesday");
    else if (a==4)
    printf("thursday");
    else if (a==5)
    printf("friday");
    else if (a==6)
    printf("saturday");
    else if (a==7)
    printf("sunday");
    else if (a==0)
    printf("invalid input");
}