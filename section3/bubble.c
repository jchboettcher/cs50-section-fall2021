#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

void print_array(int array[]);
void bubble_sort(int values[]);

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

    bubble_sort(values);

    printf("Sorted:   ");
    print_array(values);
}

void bubble_sort(int values[]) {
    for (int i = 0; i < arr_len - 1; i++)
    {
        bool swaps = false;
        for (int j = 0; j < arr_len - 1 - i; j++)
        {
            if (values[j] > values[j + 1])
            {
                swaps = true;
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
        if (swaps == false)
        {
            break;
        }
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
