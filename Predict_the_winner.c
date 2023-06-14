#include<stdio.h>
int absd(int a,int b){
    if(a>b) return a-b;
    else return b-a;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int xvals=0;
    int yvals=0;
    for(int i=0;i<n;i++){
        if(i%2==0) xvals+=a[i];
        else yvals+=a[i];
    }
    if(absd(xvals,yvals)%4==0) printf("X");
    else printf("Y");
}