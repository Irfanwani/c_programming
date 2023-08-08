// Q1) write a program to print the table of a given number in the following format:
// n * i = m ... nx * my = mn

#include <stdio.h>

int main()
{
    int i, j, res;
    printf("Please enter the number which you want the table of: ");
    scanf("%d", &i);

    // using for loop
    for (j = 1; j <= 10; j++)
    {
        res = i * j;

        printf("%d x %d = %d\n", i, j, res);
    }

    // using while loop
    j = 1;
    while (j <= 10)
    {
        res = i * j;

        printf("%d x %d = %d\n", i, j, res);
        j++;
    };
    

    return 0;
}
