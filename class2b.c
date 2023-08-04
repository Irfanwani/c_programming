// PASSING ARRAY AS AN ARGUMENT TO AN ARRAY
#include <stdio.h>


int biggest(int s[], int l) {
    int i, largest = s[0];
    for (i = 1; i < l; i++) {
        if(largest < s[i]) {
            largest = s[i];
        }
    }

    return largest;
}

int main() {
    int x[10], i;
    printf("Input ten numbers: ");
    for(i =0; i<= 9; i++) {
        scanf("%d", &x[i]);
    }

    int largest_number = biggest(x, 10);
    printf("Largest number in the array is: %d", largest_number);

    return 0;
}