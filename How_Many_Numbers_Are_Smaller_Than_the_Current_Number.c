#include<stdio.h>
int minc(int* a,int n,int val){
    int c=0;
    for(int i=0;i<n;i++){
        if(val>a[i]) c++;
    }
    return c;
}
int main(){
    int n,flag=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min[n];
    for(int i=0;i<n;i++){
        min[i]=minc(a,n,a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",min[i]);
    }
}