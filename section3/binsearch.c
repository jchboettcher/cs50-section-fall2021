#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

bool recursive_search(int value, int values[], int start, int end);
bool bin_search(int value, int values[]);

int arr_len;

int main(void)
{
    arr_len = get_int("How many values? ");
    int values[arr_len];
    for (int i = 0; i < arr_len; i++)
    {
        values[i] = get_int("Value %i: ", i);
    }

    int value = get_int("What value are you searching for? ");

    bool found_value = bin_search(value, values);

    if (found_value)
    {
        printf("Yes!\n");
    }
    else
    {
        printf("No!\n");
    }
}

// recursive function used by bin_search (below)
// it searches for value in values, but only between indices start and end
bool recursive_search(int value, int values[], int start, int end)
{
    // if the "end" comes before the "start" then the element can't be in the array
    if (end < start)
    {
        return false;
    }
    
    // calculate the midpoint of the current array
    int midpoint = (start + end) / 2;
    
    // if we found what we're looking for in the middle, return true
    if (value == values[midpoint])
    {
        return true;
    }
    
    // if the element at the midpoint is too large, repeat with the left half of the array
    else if (value < values[midpoint])
    {
        return recursive_search(value, values, start, midpoint - 1);
    }
    
    // otherwise, repeat with the right half of the array
    else
    {
        return recursive_search(value, values, midpoint + 1, end);
    }
}

// calls recursive_search, specifying start and end as the start and end of the entire array.
// this way, we are searching the array in its entirety.
bool bin_search(int value, int values[])
{
    return recursive_search(value, values, 0, arr_len - 1);
}