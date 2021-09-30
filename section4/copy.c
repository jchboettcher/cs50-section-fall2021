#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void copy_file(FILE *infile, FILE *outfile);

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./copy infile outfile\n");
        return 1;
    }

    FILE *infile = fopen(argv[1], "r");
    if (infile == NULL)
    {
        printf("Could not open file %s\n", argv[1]);
        return 2;
    }

    FILE *outfile = fopen(argv[2], "w");
    if (outfile == NULL)
    {
        printf("Could not open file %s\n", argv[2]);
        return 3;
    }

    copy_file(infile, outfile);

    fclose(infile);
    fclose(outfile);
}

void copy_file(FILE *infile, FILE *outfile)
{
    while (true)
    {
        char c = fgetc(infile);
        if (c == EOF)
        {
            return;
        }
        fputc(c, outfile);
    }
}