#include<stdio.h>
void printOneToN(int i, int n){
    if(i==n+1) return;
    printf("%d\n",i);
    printOneToN(i+1,n);
}
int main(){
    int n;
    scanf("%d",&n);
    printOneToN(1,n);
    
    return 0;
}