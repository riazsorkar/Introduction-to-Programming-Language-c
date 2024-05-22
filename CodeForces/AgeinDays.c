#include<stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a/365;
    printf("%d years\n",b);
    e=a-(b*365);
    c=e/30;
    printf("%d months\n",c);
    d=e-(c*30);
    d=d/1;
    printf("%d days",d);
    return 0;
}