#include<stdio.h>
void shiftElements(int arr[], int n) {
    int last = arr[n - 1];

    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t!=0){
        int n,k;
        scanf("%d%d",&n,&k);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int j=0;j<k;j++){
            shiftElements(a,n);
        }
        for(int i=0;i<n;i++){
            printf("%d",a[i]);
            if(i!=n-1) printf(" ");
        }
        if(t!=1) printf("
");
        t--;
    }
}