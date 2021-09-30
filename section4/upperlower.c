#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void copy_file(FILE *infile, FILE *outfile1, FILE *outfile2);

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Usage: ./copy infile upperfile lowerfile\n");
        return 1;
    }

    FILE *infile = fopen(argv[1], "r");
    if (infile == NULL)
    {
        printf("Could not open file %s\n", argv[1]);
        return 1;
    }

    FILE *outfile1 = fopen(argv[2], "w");
    if (outfile1 == NULL)
    {
        printf("Could not open file %s\n", argv[2]);
        return 2;
    }

    FILE *outfile2 = fopen(argv[3], "w");
    if (outfile2 == NULL)
    {
        printf("Could not open file %s\n", argv[3]);
        return 3;
    }

    copy_file(infile, outfile1, outfile2);

    fclose(infile);
    fclose(outfile1);
    fclose(outfile2);
}

void copy_file(FILE *infile, FILE *outfile1, FILE *outfile2)
{
    while (true)
    {
        char c = fgetc(infile);
        if (c == EOF)
        {
            return;
        }
        fputc(toupper(c), outfile1);
        fputc(tolower(c), outfile2);
    }
}