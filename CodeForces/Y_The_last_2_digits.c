#include<stdio.h>
int main(){
    long long int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    long long int m=a*b*c*d%100;
    
    printf("%d", m);
    return 0;
}