#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

void print_array(int array[]);
void selection_sort(int values[]);

int arr_len;

int main(void)
{
    arr_len = get_int("How many values? ");
    int values[arr_len];
    for (int i = 0; i < arr_len; i++)
    {
        values[i] = get_int("Value %i: ", i);
    }
    printf("Unsorted: ");
    print_array(values);

    selection_sort(values);

    printf("Sorted:   ");
    print_array(values);
}

void selection_sort(int values[]) {
    for (int i = 0; i < arr_len - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < arr_len; j++)
        {
            if (values[j] < values[min_index])
            {
                min_index = j;
            }
        }
        int temp = values[i];
        values[i] = values[min_index];
        values[min_index] = temp;
    }
}

void print_array(int array[])
{
    printf("[");
    for (int i = 0; i < arr_len; i ++)
    {
        printf("%i", array[i]);
        if (i != arr_len - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
}
