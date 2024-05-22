#include<stdio.h>
int sum(int a , int b){
    int result = a+b;
    printf("%d",result);
    return 0;
}
int main(){
    int a ,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}