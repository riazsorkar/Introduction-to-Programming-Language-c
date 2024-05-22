#include<stdio.h>
#include<string.h>
int main(){
    char a[100001];
    scanf("%s",&a);
    int l=strlen(a);
    for(int i=0; i<l;i++){  
        if(a[i]==','){
            a[i]=32;
        }
        if(a[i]>=65 && a[i]<=90){
            a[i]=a[i]+32;
        }else if (a[i]>=97 && a[i]<=122){
            a[i]=a[i]-32;
        }
        printf("%c",a[i]);
    }
    return 0;
}