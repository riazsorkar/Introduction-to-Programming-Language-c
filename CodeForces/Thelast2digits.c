#include<stdio.h>
int main(){
    long long int a,b,c,d,x,y;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    x=a*b*c*d;
    y=x%100;
    printf("%lld",y);
    return 0;
}

// 434500145 147276606 217842775 236387740