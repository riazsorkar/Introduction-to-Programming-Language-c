#include<stdio.h>
#include<string.h>
int main(){
    char a[1001];
    scanf("%s",&a);
    int ln=strlen(a);
    int is_palindrome = 1;
    for (int i = 0; i < ln / 2; i++) {
        if (a[i] != a[ln - i - 1]) {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }



    return 0;
}