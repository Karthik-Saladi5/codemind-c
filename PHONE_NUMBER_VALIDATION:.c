#include<stdio.h>
#include<math.h>
int main()
{
    long int n;
    scanf("%ld",&n);
    int c=log10(n)+1;
    if(c==10) printf("Valid");
    else printf("Invalid");
    
}