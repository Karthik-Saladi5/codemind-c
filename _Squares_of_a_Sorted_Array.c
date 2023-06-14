#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],sq[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sq[i]=a[i]*a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(sq[j]>sq[j+1]){
                int temp=sq[j];
                sq[j]=sq[j+1];
                sq[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",sq[i]);
    }
}