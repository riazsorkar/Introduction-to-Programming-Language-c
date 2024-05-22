#include<stdio.h>
int main(){
    int x,y,m,r;
    scanf("%d %d", &x,&y);
    m = (x-y)/2;
    r = m+y;
    printf("%d %d", r,m);
    return 0;
}