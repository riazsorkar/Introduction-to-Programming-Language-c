#include<stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);
    
    for (int i = 0; i < testCase; i++) {
        long long int m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        
        if (m % (a * b) == 0 && m % (b * c) == 0 && m % (a * c) == 0) {
            printf("%lld\n", m / (a * b * c));
        } else {
            printf("-1\n");
        }
    }
    
    return 0;
}
