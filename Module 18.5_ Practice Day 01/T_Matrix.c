#include<stdio.h>
int main(){
    int n;
    int pDia = 0, secDia = 0;
    scanf("%d", &n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j] );
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                // printf("%d", a[i][j]);
                pDia = pDia + a[i][j];
            }
            if(i+j == n-1){
                // printf("%d", a[i][j]);
                secDia = secDia + a[i][j];
            }

        }
        // printf("\n");
        
    }
    
    // printf("%d\n", pDia);
    // printf("%d\n", secDia);
    int sum = pDia-secDia;
    if(sum<0){
        sum = sum*(-1);
        printf("%d",sum);
    }else{
        printf("%d",sum);
    }
    
    return 0;
}