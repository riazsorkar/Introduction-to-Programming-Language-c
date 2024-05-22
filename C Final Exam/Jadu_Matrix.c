#include <stdio.h>

int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    
    int a[row][col];
    int flag = 1;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    if (row != col) {
        flag = 0;
    }
    for (int i = 0; i < row && flag; i++) {
        for (int j = 0; j < col; j++) {
            if (i != j && i+j != row-1 && a[i][j] != 0) 
            {
                flag = 0; 
                break;
            }
        }
    }
    for (int i = 0; i < row && flag; i++) {
        if (a[i][i] != 1 || a[i][row-i-1] != 1) 
        {
            flag = 0;
            break;
        }
    }
    if (flag) {
        printf("YES");
    } else {
        printf("NO");
    }
}
