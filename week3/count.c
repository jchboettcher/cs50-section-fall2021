#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

void countup(int n);
void countdown(int n);

int main(void)
{
    int n = get_int("Number: ");

    printf("countup:\n");
    countup(n);

    printf("countdown:\n");
    countdown(n);
}

void countup(int n)
{
    if (n < 0)
    {
        return;
    }
    countup(n - 1);
    printf("%i\n", n);
}

void countdown(int n)
{
    if (n < 0)
    {
        return;
    }
    printf("%i\n", n);
    countdown(n - 1);
}