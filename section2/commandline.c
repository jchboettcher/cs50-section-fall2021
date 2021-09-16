#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

// program that takes in some command-line arguments and prints them each on their own line

int main(int argc, string argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
}
