#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a>='a'){
        printf("%c", a-32);
    }else{
        printf("%c",a+32);
    }
    return 0;
}