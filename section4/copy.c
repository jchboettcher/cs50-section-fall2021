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

    FILE *infile;
    FILE *outfile;

    copy_file(infile, outfile);
}

void copy_file(FILE *infile, FILE *outfile)
{
    
}