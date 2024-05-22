#include<stdio.h>
int main(){
    char a;
    scanf("%c", &a);
    if(a<=57)
    {
        printf("IS DIGIT");
    }else if(a>=65){
        printf("ALPHA\n");
        if(a>=97){
            printf("IS SMALL");
        }else{
            printf("IS CAPITAL");
        }
    }
    return 0;
}