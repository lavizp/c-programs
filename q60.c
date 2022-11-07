#include <stdio.h>
int fib(int); // Function declaration

int main()
{
    int n; // Declaration of variable
    printf("Enter nth fibonacci number to be printed: ");
    scanf("%d", &n);
    printf("The %d term in the fibnoci series is: %d ", n, fib(n)); // Calling function
}
int fib(int n) // Function declaration
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2); // Recursive funnction
}