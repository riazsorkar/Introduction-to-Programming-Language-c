#include <stdio.h>
int main() {
    int a,i=21;
    scanf("%d",&a);
    for(i;i<=a;i++){
        if(i%3==0 && i%7==0){
            printf("%d\n", i);
        }
    }
    return 0;
};