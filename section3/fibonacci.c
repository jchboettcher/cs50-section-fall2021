#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int fibonacci(int n);

int main(void)
{
    int n = get_int("n: ");
    printf("%i\n", fibonacci(n));
}

int fibonacci(int n)
{
    // base case 1
    if (n == 1)
    {
        return 1;
    }
    // base case 2
    if (n == 2)
    {
        return 1;
    }
    // recursive calls
    return fibonacci(n-1) + fibonacci(n-2);
}
