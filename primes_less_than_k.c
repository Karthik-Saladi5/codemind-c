#include<stdio.h>
#include<stdbool.h>
bool isprime(int n){
    int i,c=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==0)
    return 1;
    else
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n],c=0,k;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(isprime(a[i]) && a[i]<=k && a[i]!=1) c++;
    }
    printf("%d",c);
}