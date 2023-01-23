#include<stdio.h>
#include<math.h>
int main(){
    int n,e=0,o=0,a,b;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            a=pow(3,e);
            printf("%d ",a);
            e++;
        }
        else
        {
            b=pow(2,o);
            printf("%d ",b);
            o++;
        }
    }
}