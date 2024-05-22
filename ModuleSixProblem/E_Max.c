#include<stdio.h>
int main(){
    int n,k, g=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%d", &k);
        // printf("%d\n", k);
        if(k>g){
            g = k;
        }
    }
     printf("%d\n", g);
    return 0;
}