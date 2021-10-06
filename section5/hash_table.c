#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGS 10

typedef struct node
{
    // COPY FROM linked_list.c
}
node;

node *HASH_TABLE[100] = {NULL};

node* add_node(node*, int);
void free_nodes(node*);
bool search_list(node*, int);
int hash(int);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./hash_table file\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        printf("Could not open file %s\n", argv[1]);
        return 1;
    }

    char word[MAX_DIGS + 1];
    while (fscanf(file, "%s", word) != EOF)
    {
        int x = atoi(word);

        // TODO: Hash number to decide what bucket it should go in.
        int hashed = hash(x);

        // From linked_list.c : Add new node to head of linked list.
        HASH_TABLE[hashed] = add_node(HASH_TABLE[hashed], x);
    }

    while (true)
    {
        int x = get_int("Search for number: ");
        if (x == INT_MAX)
        {
            printf("\n");
            break;
        }

        // TODO: Search for number in our hash table.
        // If it's there, print FOUND; otherwise, print NOT FOUND.
        int hashed = hash(x);
        if (search_list(HASH_TABLE[hashed], x))
        {
            printf("FOUND\n\n");
        }
        else
        {
            printf("NOT FOUND\n\n");
        }

    }

    for (int i = 0; i < 100; i++)
    {
        // From linked_list.c : Free all nodes.
        free_nodes(HASH_TABLE[i]);
    }
}

// Adds a node with x at start of list
node* add_node(node *list, int x)
{
    // COPY FROM linked_list.c
}

// Frees nodes of a linked list
void free_nodes(node *list)
{
    // COPY FROM linked_list.c
}

// Searches through linked list for value
bool search_list(node *list, int x)
{
    // TODO
}

// Returns the hashed value for an integer
int hash(int x)
{
    // TODO
}
