#include<stdio.h>
int main(){
    float n,s=0;
    scanf("%f",&n);
    for(float i=1;i<=n;i++){
        s+=1/i;
    }
    printf("%.2f",s);
}