#include<stdio.h>
#include<string.h>
int main(){
    char a[21],b[21];
    scanf("%s %s", &a,&b);
    int l=strcmp(a,b);
    if(l>0){
        printf("%s",a);
    }else if(l<0){
        printf("%s",a);
    }else{
        printf("%s",b);
    }
    // int i=0;
    // while(1){
    //     if(a[i]=='\0' && b[i]=='\0'){
    //         printf("%s",a);
    //         break;
    //     }else if(a[i]=='\0'){
    //         printf("%s",a);
    //         break;
    //     }else if(b[i]=='\0'){
    //          printf("%s",b);
    //         break;
    //     }
    //     if(a[i]==b[i]){
    //         i++;
    //     }else if(a[i]<b[i]){
    //          printf("%s",a);
    //         break;
    //     }else{
    //          printf("%s",b);
    //         break;
    //     }
    // }
    return 0;
}