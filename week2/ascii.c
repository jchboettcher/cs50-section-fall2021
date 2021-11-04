#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// program that takes in a character and outputs its ascii value

int main(void)
{
    char c = get_char("Character: ");
    int ascii_val = (int) c;
    printf("%i\n", ascii_val);
}
