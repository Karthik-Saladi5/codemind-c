#include<stdio.h>
int check_dup(int* a,int n,int val){
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]==val) c++;
        if(c>1) break;
    }
    if(c==1) {
        return val;
    }
    return -1;
}
int main(){
    int n,j=0,flag=0;
    scanf("%d",&n);
    int a[n],uni[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int val=check_dup(a, n, a[i]);
        if(val!=-1){
        uni[j]  = val;
        j++;}    
    }
    if(j==0) printf("-1");
    else{
    int max=0;
    for(int i=0;i<j;i++){
        if(max<uni[i]) max=uni[i];
    }
    printf("%d",max);
}}