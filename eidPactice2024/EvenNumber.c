#include<stdio.h>
int main(){
    int n,y,a,b,c,d;
    scanf("%d",&n);
    y=n/5;
    a=y-2;
    b=a-2;
    c=y+2;
    d=c+2;
    printf("%d %d %d %d %d",b,a,y,c,d);
    return 0;
}