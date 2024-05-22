#include<stdio.h>
int main(){
    int n,c,x,y,z;
    scanf("%d %d",&n,&c);
    x=n/c;
    y=n-(x*c);

    printf("%d %d",x,y);
    return 0;
}