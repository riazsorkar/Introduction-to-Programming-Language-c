#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    
    if (B == 0) {
        printf("-1\n");
    } else {
        int remainder = A % B;
        printf("%d\n", remainder);
    }
    
    return 0;
}
