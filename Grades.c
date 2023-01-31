#include<stdio.h>
int grade(int p, int c, int b,int m,int s)
{
    int t;
    t=(p+c+b+m+s)/5;
    if (t>=90)
    return 1;
    else if(t>=80)
    return 2;
    else if(t>=70)
    return 3;
    else if(t>=60)
    return 4;
    else if(t>=40)
    return 5;
    else if(t<40)
    return 0;
}
int main()
{
    int p,c,b,m,s;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&s);
    int x=grade(p,c,b,m,s);
    if (x==1)
    printf("Grade A");
    else if(x==2)
    printf("Grade B");
    else if(x==3)
    printf("Grade C");
    else if(x==4)
    printf("Grade D");
    else if(x==5)
    printf("Grade E");
    else if(x==0)
    printf("Grade F");
}