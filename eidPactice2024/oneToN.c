#include<stdio.h>
int main(){
    long long int n,i,x=0;
    scanf("%lld",&n);
    for(i=0;i<=n;i++){
        x+=i;
    }
    printf("%lld",x);
    return 0;
}