#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>=5000){  
        if(a>=10000){
            printf("Gucci Bag");
            if(a>20000){
                    printf("\nGucci Belt");
                }
        }else{
                printf("Levis Bag");
            }           
    }else{
        printf("Something");
    } 
    return 0;
};