#include<stdio.h>
int main(){
    int a,m;
    scanf("%d",&a);
    m = a/1000;
    if(m%2==0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
    return 0;
}