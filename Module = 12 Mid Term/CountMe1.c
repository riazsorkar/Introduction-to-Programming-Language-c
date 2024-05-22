#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int divTwo = 0;
    int divThree = 0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0 && a[i]%3==0){
            divTwo++;
        }else if(a[i]%2==0){
            divTwo++;
        }else if(a[i]%3==0){
            divThree++;
        }
    }
    printf("%d %d",divTwo, divThree);
    return 0;
}