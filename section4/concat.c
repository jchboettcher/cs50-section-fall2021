#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat(char*, char*);

int main(void)
{
    char *c = get_string("String 1: ");
    char *d = get_string("String 2: ");
    char *cd = concat( );
    printf("%s + %s = %s\n", c, d, cd);
}

// Concatenates two strings
char* concat(char *c, char *d)
{
    
}