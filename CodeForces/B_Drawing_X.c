#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        int k=a-1;
        for(int j=1;j<=a;j++)
        {
            if(i-j==k){
                printf("/");
            }else{
                printf("");
            } if(i==j){
                printf("\\");
            }else{
                printf("*");
            }
            k=k-2;
        }
        printf("\n");
    }
    return 0;
}