#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat(char*, char*);

int main(void)
{
    char *c = get_string("String 1: ");
    char *d = get_string("String 2: ");
    char *cd = concat(c, d);
    printf("%s + %s = %s\n", c, d, cd);
    free(cd);
}

// Concatenates two strings
char* concat(char *c, char *d)
{
    int clen = strlen(c);
    int dlen = strlen(d);
    char *both = malloc((clen+dlen+1)*sizeof(char));
    for (int i = 0; i < clen; i++)
    {
        both[i] = c[i];
    }
    for (int i = 0; i < dlen; i++)
    {
        both[i+clen] = d[i];
    }
    both[clen+dlen] = '\0';
    return both;
}