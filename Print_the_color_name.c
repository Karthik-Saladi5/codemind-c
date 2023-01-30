#include<stdio.h>
int colour(char c)
{
    if(c=='v' || c=='V')
    return 1;
    else if(c=='i' || c=='I')
    return 2;
    else if(c=='b'|| c=='B')
    return 3;
    else if(c=='g' || c=='G')
    return 4;
    else if(c=='y' || c=='Y')
    return 5;
    else if(c=='o' ||c=='O')
    return 6;
    else if(c=='r'||c=='R')
    return 7;
    else
    return 0;
}
int main()
{
    char c;
    scanf("%c",&c);
    int x=colour(c);
    if(x==1)
    printf("Violet");
    else if(x==2)
    printf("Indigo");
    else if(x==3)
    printf("Blue");
    else if(x==4)
    printf("Green");
    else if(x==5)
    printf("Yellow");
    else if(x==6)
    printf("Orange");
    else if(x==7)
    printf("Red");
    else if(x==0)
    printf("-1");
}