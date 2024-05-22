#include<stdio.h>
void printNToOne(int n){
    if(n==0) return;
    if(n==1){
        printf("%d",n);
    }else{
        printf("%d ",n);
    }
    printNToOne(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printNToOne(n);
    
    return 0;
}