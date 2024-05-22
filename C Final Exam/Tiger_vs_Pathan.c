#include<stdio.h>

int main() {
    int tasCase;
    scanf("%d", &tasCase);
    
    for (int i = 0; i < tasCase; i++) {
        int n;
        scanf("%d", &n);
        
        char s[n+1];
        scanf("%s", s);
        
        int tiger = 0, pathan = 0;
        for (int j = 0; j < n; j++) {
            if (s[j] == 'T') {
                tiger++;
            } else if (s[j] == 'P') {
                pathan++;
            }
        }
        
        if (tiger > pathan) {
            printf("Tiger\n");
        } else if (tiger < pathan) {
            printf("Pathaan\n");
        } else {
            printf("Draw\n");
        }
    }
    
    return 0;
}
