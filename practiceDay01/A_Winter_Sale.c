#include<stdio.h>
int main(){
    int x,p;
    scanf("%d %d",&x,&p);
    float a = (x*p)/(100.0-x);
    printf("%.2f",a+p);
    return 0;
}