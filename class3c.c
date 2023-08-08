// Printing a right triangle of numbers

#include <stdio.h>

// int main()
// {
//     int i, j, k = 1;

//     for (i = 1; i <= 5; i++)
//     {
//         for (j = i; j <= 5; j++)
//         {
//             printf("%d  ", j); // replace i with j to print a pyramid with all rows as numbers from 1.
//             // k++;
//         };
//         printf("\n");
//     }
//     return 0;
// }

int main() {
    int i, j, k = 1;

    for (i = 1; i <= 5; i++) {
        for(j = i; j < 2*i; j++) {
            printf("%d  ", k);
            k++;
        }
        printf("\n");
        k--;
    }


    return 0;
}