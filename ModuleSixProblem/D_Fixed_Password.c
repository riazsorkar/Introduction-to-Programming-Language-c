#include<stdio.h>
int main(){
    int pass;
    int correctPass = 1999;
    while (scanf("%d",&pass) != EOF ){
        
        if(correctPass == pass ){
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");
        }
    }
    return 0;
}