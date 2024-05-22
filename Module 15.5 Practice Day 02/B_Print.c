#include<stdio.h>
void nums(int n){
    for(int i=1;i<=n;i++){
        if (i == 1) {
            printf("%d", i);
        } else {
            printf(" %d", i);
        }
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n); 
    nums(n);
    return 0;
}