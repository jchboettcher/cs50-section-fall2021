#include <stdbool.h>
#include <stdio.h>

const char signature[6] = {'G', 'I', 'F', '8', '9', 'a'};

bool is_gif(FILE *f);

int main(int argc, char *argv[])
{
    // Check usage
    if (argc != 2)
    {
        printf("Usage: ./gif_detector filename\n");
        return 1;
    }

    // Open file
    FILE *f = fopen(argv[1], "r");
    if (f == NULL)
    {
        printf("Could not read file %s\n", argv[1]);
        return 1;
    }

    // Check for GIF signature
    if (is_gif(f))
    {
        printf("GIF\n");
    }
    else
    {
        printf("NOT GIF\n");
    }

    // Close file
    fclose(f);
}

bool is_gif(FILE *f)
{
  
}
