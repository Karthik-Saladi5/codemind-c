#include<stdio.h>
#include<math.h>
int main()
{
    int n,sqrut;
    scanf("%d",&n);
    sqrut=sqrt(n);
    if(n==(sqrut*sqrut)) printf("True");
    else printf("False");
}