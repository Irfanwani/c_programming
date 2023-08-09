// functions
// 1. Declaration/ prototype
// 2. Definition / body/ behaviour
// 3. calling / execution

// Q) receive two numbers from the user and display the sum of them using the case function with arguments but without return value

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers to get their sum: ");
    scanf("%d\n%d", &a, &b);
    void display(int, int);
    display(a, b);

    return 0;
}

void display(int a, int b)
{
    printf("%d + %d = %d", a, b, a+b);
}
