#include<stdio.h>
int main(){
    int testCase;
    scanf("%d",&testCase);
    for(int t=0;t<testCase;t++){
        int n;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
       c[i]=a[i]-b[i];
    }
    for(int i=0;i<n;i++){
        if(c[i]<0){
            c[i] = c[i]*(-1);
        }
       printf("%d ", c[i]);
    }
    printf("\n");
    }
    return 0;
}