#include<stdio.h>
#include<string.h>
int is_palindrome(char a[]){
    int ln=strlen(a);
    int is = 1;
    for (int i = 0; i < ln / 2; i++) {
        if (a[i] != a[ln - i - 1]) {
            is = 0;
            break;
        }
    }
    return is;
}
int main(){
    char a[1001];
    scanf("%s", &a);
    int res = is_palindrome(a);
    if (res==1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}