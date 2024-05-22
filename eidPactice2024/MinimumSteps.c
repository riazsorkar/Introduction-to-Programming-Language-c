#include<stdio.h>
int main(){
    int n,a,b,c;
    scanf("%d",&n);

    a=n/3;
    b=n-(a*3);
    if(b==0){
        b=0;
    }else if(b==1){
        b=1;
    }else if(b==2){
        b=1;
    }
    c=a+b;

    printf("%d",c);
    return 0;
}