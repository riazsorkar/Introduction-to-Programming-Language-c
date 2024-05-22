#include<stdio.h>
int main(){
    int i=1,n,z,t;
    scanf("%d",&n);
    // for(i=1;i<=n;i++){
    //     z=n+i; 
    // }
    while(i<=n){
        z=n+i;
        i++;
    }

    printf("%d ",z);
    return 0;
}
