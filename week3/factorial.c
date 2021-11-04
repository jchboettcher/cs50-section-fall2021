#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int factorial(int n);

int main(void)
{
    int n = get_int("number: ");
    printf("%i\n", factorial(n));
}

int factorial(int n)
{
    // base case
    if (n == 1) {
        return 1;
    }
    // recursive call
    return factorial(n-1) * n;
}

// n = 3
// -> 2 * 3 -> 6

// n = 2
// -> 1 * 2 -> 2

// n = 1
// -> 1


// n = 5
// -> 24 * 5 -> 120

// n = 4
// -> 6 * 4 -> 24

// n = 3
// -> 2 * 3 -> 6

// n = 2
// -> 1 * 2 -> 2

// n = 1
// -> 1