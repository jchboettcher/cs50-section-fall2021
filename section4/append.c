#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* append(int*, int, int*);
void printls(int*, int);

int main(void)
{
    int length = 1;
    int *ls = malloc(length * sizeof(int));
    ls[0] = 5;

    while (true)
    {
        int new_int = get_int("Type a non-negative number to add. When you're done, type a negative number: ");
        if (new_int < 0)
        {
            break;
        }
        int *new_ls = append(ls, new_int, &length);
        free(ls);
        ls = malloc(length * sizeof(int));
        // copying over the new array
        for (int i = 0; i < length; i ++)
        {
            ls[i] = new_ls[i];
        }
        free(new_ls);
        printls(ls, length);
    }
    free(ls);
}


// Adds an integer to the end of a list of integers
int* append(int *ls, int next, int *current_length)
{
    int new_size = *current_length * sizeof(int) + sizeof(int);
    int *ls2 = malloc(new_size);
    for (int i = 0; i < *current_length; i ++)
    {
        ls2[i] = ls[i];
    }
    ls2[*current_length] = next;
    *current_length = *current_length + 1;
    return ls2;

}

// Prints a list of integers
void printls(int* nums, int length)
{
    printf("[");
    for (int i = 0; i < length; i ++)
    {
        printf("%i", nums[i]);
        if (i != length - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
}