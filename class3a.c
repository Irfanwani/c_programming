#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char res;

    printf("Please enter your age: ");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("\nYou are not eligible to vote!");
        return 0;
    }

    printf("\nAre you an indian citizen?(y/n)");
    scanf("%s", &res);

    if (res == 'y')
    {
        printf("\nYou are eligible to cast your vote!");
    }
    else
    {
        printf("\nYou are not eligible to vote!");
    }
    return 0;
}

