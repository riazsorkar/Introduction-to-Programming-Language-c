#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    int max = a[0];
    int min = a[0];

    for(int i=0; i<n; i++){
        if(a[i] > max){
            max = a[i];
            a[i] = min;
        }
        if(a[i] < min){
            min = a[i];
            a[i] = max;
        }
    }
    // int temp = a[0];
    //     temp = max;
    //     max=min;
    //     min=temp;

    // printf("%d ",max);
    // printf("%d ",min);
    // printf("%d\n",a[1]);

    

    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    
    return 0;
}