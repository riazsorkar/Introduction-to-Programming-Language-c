#include<stdio.h>
int main(){
    int n,a,b,c,d;
    scanf("%d",&n);

    a=(n/4)+1;
    b=a-2;
    c=b-2;
    d=a+2;

    printf("%d %d %d %d", c,b,a,d);
    return 0;
}