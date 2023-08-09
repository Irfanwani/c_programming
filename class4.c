// Q) generate the table of the given number and store the result in an array and then display the result
#include <stdio.h>

int main()
{
    int res[10], num, i;
    printf("Enter the number to get the table: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        res[i - 1] = num * i;
    };

    printf("Here is your table: \n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, res[i - 1]);
    }

    return 0;
}