#include<stdio.h>
int main()
{
    int n,r,s,v;
    scanf("%d",&n);
    v=n;
    s=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    if(v==s)
    printf("Palindrome");
    else
    printf("Not Palindrome");
}