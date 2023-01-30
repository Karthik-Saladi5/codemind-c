#include<stdio.h>
int cas(char a)
{
     if (a>='A' && a<='Z') return 1;
    else if(a>='a' && a<='z') return 2;
    else return 0;
}
int main()
{
    char a;
    scanf("%c",&a);
    int x=cas(a);
    if(x==1) printf("uppercase alphabet");
    else if(x==2) printf("lowercase alphabet");
    else printf("not an alphabet");
}