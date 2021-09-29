#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int*, int*);

int main(void)
{
    int a = get_int("a = ");
    int b = get_int("b = ");
    swap( );
    printf("a = %i\n", a);
    printf("b = %i\n", b);
}

// Swaps the values of two integer pointers
void swap(int *pa, int *pb)
{
    // what's wrong with this?
    int *temp = pa;
    pa = pb;
    pb = temp;
}