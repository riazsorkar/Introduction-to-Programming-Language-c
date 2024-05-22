#include<stdio.h>
void iLoveRecursion(int i, int n){
    if(i==n+1) return;
    printf("I love Recursion\n");
    iLoveRecursion(i+1,n);
}
int main(){
    int n;
    scanf("%d",&n);
    iLoveRecursion(1,n);
    
    return 0;
}