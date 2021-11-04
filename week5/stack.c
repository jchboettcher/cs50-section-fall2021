#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CAPACITY 1000

typedef struct stack
{
    // TODO: Implement stack struct.
}
stack;

void push(stack*, int);
int pop(stack*);
void printlist(int* nums, int length);

int main(int argc, char *argv[])
{
    // TODO: Initialize stack

    while (true)
    {
        char *push_or_pop = get_string("push or pop? ");
        if (strcmp(push_or_pop, "push") == 0)
        {
            int x = get_int("Number: ");

            // TODO: Push to the stack.
            push(/* TODO */);

            printf("Pushed %i\n", x);
        }
        else if (strcmp(push_or_pop, "pop") == 0)
        {
            // TODO: Pop from the stack.
            int x = pop(/* TODO */);

            printf("Popped %i\n", x);
        }
        else
        {
            break;
        }
        printlist(/* TODO */);
    }
}

// Pushes a value to the stack
void push(stack* s, int x)
{
    // TODO
}

// Pops a value from the stack
int pop(stack* s)
{
    // TODO
}

// Prints a list of integers
void printlist(int* nums, int length)
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