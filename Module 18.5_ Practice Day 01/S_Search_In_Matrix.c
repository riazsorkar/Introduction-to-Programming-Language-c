#include<stdio.h>
int main(){
    int row,col,find;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&find);
    int flag = 0;

    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
            // printf("%d ",a[i][j]);
            if(a[i][j] == find){
                flag = 1;
            }
        }
        // printf("\n");
    }
    // printf("%d",flag);
    if(flag==1){
        printf("will not take number");
    }else{
        printf("will take number");
    }
    return 0;
}