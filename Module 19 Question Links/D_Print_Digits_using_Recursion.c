#include<stdio.h>
void printDigits(int n){
    if(n==0) return;
    int x=n%10;
    int y=n/10;
    printDigits(y);
    printf("%d ",x);

}
int main(){
    int tCase;
    scanf("%d",&tCase);
    for(int i=0;i<tCase;i++){
        int n;
        scanf("%d",&n);
        printDigits(n);
        if(n==0){
            printf("0");
        }
        printf("\n");
    }

    return 0;
}