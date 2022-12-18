#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq,temp,rev=0,revsq=0,sqrev;
    scanf("%d",&temp);//12
    n=temp;
    sq=n*n;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    sqrev=rev*rev;
    while(sqrev!=0)
    {
        revsq=revsq*10+sqrev%10;
        sqrev=sqrev/10;
    }
    if(revsq==sq) printf("True");
    else printf("False");
    
    
}