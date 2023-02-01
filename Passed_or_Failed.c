#include<stdio.h>
int pof(int a, int b, int c, int d, int e)
{
    if (a>34 && b>34 && c>34 && d>34 && e>34)
    return 1;
    else
    return 0;
}
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int x=pof(a,b,c,d,e);
    if (x==1)
    printf("PASSED");
    else if(x==0)
    printf("FAILED");
}