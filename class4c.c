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
    void display(int, int); // change void to the datatype of the value which is returned by the function (if so).
    display(a, b);          // if returning any value, we can assign the function call to some variable to reuse the value

    // decleration and calling of function with args and return statement
    int sum(int, int);
    int res = sum(a, b);

    printf("\nResult from sum function: %d", res);
    return 0;
}

// function with args but no return statement
void display(int a, int b)
{
    printf("%d + %d = %d", a, b, a + b);
}

// function with args and return statement
int sum(int a, int b)
{

    return a + b;
}