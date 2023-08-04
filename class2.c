// LOOPS
#include <stdio.h>

int main() {
    int a[2][2], b[2][2], s[2][2];
    int r, c;

    printf("Input 4 numbers for array A:");

    for(r =0 ; r <= 1; r++) {
        for(c = 0; c <= 1; c++) {
            scanf("%d", &a[r][c]);
        };
    };

    printf("Input 4 numbers for array B:");

    for(r =0 ; r <= 1; r++) {
        for(c = 0; c <= 1; c++) {
            scanf("%d", &b[r][c]);
        };
    };

    for(r = 0; r <= 1; r++) {
        for(c = 0; c <= 1; c++) {
            s[r][c] = a[r][c] + b[r][c];
        };
    };
    
    for(r = 0; r<= 1; r++) {
        for(c = 0; c<= 1; c++) {
            printf("%d + %d = %d\n", a[r][c], b[r][c], s[r][c]);
        }
    }

    return 0;
}