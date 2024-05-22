#include<stdio.h>
int main(){
    int a,b,x=0;
    scanf("%d %d", &a,&b);
    int result = a-b;
    if(result>=0){
        printf("%d",result);
    }else{
        printf("%d",x);
    }

    return 0;
}