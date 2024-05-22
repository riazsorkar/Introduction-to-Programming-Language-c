#include<stdio.h>
int main(){
    int n,k;
    int Ne = 0, Ev = 0, Od = 0, Pos = 0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d ", &k);
        if(k<0){
            Ne++; 
        }else if (k>0){
            Pos++;
        }

        if(k%2 == 0 || k%2 == -0){
            Ev++; 
        }else if (k%2 == 1 || k%2 == -1){
            Od++;
        }
    }
    printf("Even: %d\n", Ev);
    printf("Odd: %d\n", Od);
    printf("Positive: %d\n", Pos);
    printf("Negative: %d\n", Ne);
    
    return 0;
}