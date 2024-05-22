#include<stdio.h>
void minimum(int a[],int n){

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    minimum(a,n);
    return 0;
}