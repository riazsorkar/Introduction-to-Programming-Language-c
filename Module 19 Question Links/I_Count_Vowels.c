#include<stdio.h>
int countVowel(char s[],int i){
    if(s[i]=='\0'){
        return 0;
    }
    int ans=countVowel(s,i+1);
    if(s[i]>='A' && s[i]<='Z'){
        s[i]=s[i]+32;
    }
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){
        return ans+1;
    }else{
        return ans;
    }
}
int main(){
    char s[210];
    fgets(s,210,stdin);
    int c = countVowel(s,0);
    printf("%d",c);
    return 0;
}