#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// program that takes in a string and prints it reversed

int main(void)
{
    string s = get_string("Text: ");
    
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
