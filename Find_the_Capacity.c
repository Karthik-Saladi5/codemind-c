#include<stdio.h>
int main()
{
    int n[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&n[i]);
    }
    int k;
    k=(2*n[0]*n[1]*n[2]*512)/1024;
    printf("%dKB",k);
}