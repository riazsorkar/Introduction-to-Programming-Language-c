#include<stdio.h>
#include<string.h>
int main(){
    char s[1000001];
    scanf("%s", &s);
    int i=0;
    int plus=0;
    for(i;i<strlen(s);i++){
        //  printf("%c ", s[i]);
        //  printf("%d ", s[i]-'0');
        plus  = plus+s[i]-'0';
    }
    printf("%d", plus);
    
    return 0;
}