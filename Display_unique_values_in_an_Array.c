#include<stdio.h>
int check_dup(int a[],int n,int val){
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]==val) c++;
        if(c>1) break;
    }
    if(c==1) return val;
    return -1;
}
int main(){
    int n,flag=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int ans = check_dup(a, n, a[i]);
        if (ans != -1) {
            printf("%d ", ans);
            flag = 1;
        }
    }
    if(flag==0) printf("-1");
}