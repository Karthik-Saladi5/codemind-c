#include<stdio.h>
void tym(int s)
{
    int h,m;
    h=s/60;
    m=s%60;
    printf("%d Hour(s) %d Minute(s)",h,m);
}
int main()
{
    int s;
    scanf("%d",&s);
    tym(s);
}