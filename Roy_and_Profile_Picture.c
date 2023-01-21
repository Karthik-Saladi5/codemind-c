#include<stdio.h>
int main()
{
    int l,n,w,h;
    scanf("%d%d",&l,&n);
    while(n!=0)
    {
        scanf("%d%d",&w,&h);
        if(w>=l && h>=l && w!=h) printf("CROP IT");
        else if(w>=l && h>=l && w==h) printf("ACCEPTED");
        else printf("UPLOAD ANOTHER");
        printf("
");
        n--;
    }
}