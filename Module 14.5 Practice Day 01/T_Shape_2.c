#include<stdio.h>
int main(){
    int n,k=1;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int sp = n-i-1;
        for(int m=0; m<sp;m++){
            printf(" ");
        }
        for(int j=0;j<k;j++){
            printf("*");
        }
        k= k+2;
        printf("\n");
    }
    return 0;
}