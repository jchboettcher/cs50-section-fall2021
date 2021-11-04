#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CAPACITY 1000

typedef struct stack
{
    int array[CAPACITY];
    int top;
}
stack;

void push(stack*, int);
int pop(stack*);
void printlist(int* nums, int length);

int main(int argc, char *argv[])
{
    stack s;
    s.top = 0;
    while (true)
    {
        char *push_or_pop = get_string("push or pop? ");
        if (strcmp(push_or_pop, "push") == 0)
        {
            int x = get_int("Number: ");
            push(&s, x);
            printf("Pushed: %i\n", x);
        }
        else if (strcmp(push_or_pop, "pop") == 0)
        {
            int x = pop(&s);
            printf("Popped: %i\n", x);
        }
        else
        {
            break;
        }
        printlist(s.array, s.top);
    }
}

// Pushes a value to the stack
void push(stack* s, int x)
{
    s->array[s->top] = x;
    s->top++;
}

// Pops a value from the stack
int pop(stack* s)
{
    s->top--;
    return s->array[s->top];
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