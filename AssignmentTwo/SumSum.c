#include<stdio.h>
int main(){
    int n,ne=0,po=0;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        
        if(arr[i]<0){
            ne+=arr[i];
        }
        if(arr[i]>0){
            po+=arr[i];

        }
    }
    printf("%d %d",po,ne);
    return 0;
}