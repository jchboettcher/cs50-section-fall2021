#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGS 10

typedef struct node
{
    int number;
    struct node *next;
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
        // TODO: From linked_list.c : Free all nodes.
        free_nodes(HASH_TABLE[i]);
    }
}

// Adds a node with x at start of list
node* add_node(node *list, int x)
{
    node *n = malloc(sizeof(node));
    n->number = x;
    n->next = list;
	return n;
}

// Frees nodes of a linked list
void free_nodes(node *list)
{
    if (list == NULL)
    {
        return;
    }
    free_nodes(list->next);
    free(list);
}

// Searches through linked list for value
bool search_list(node *list, int x)
{
    if (list == NULL)
    {
        return false;
    }
    if (list->number == x)
    {
        return true;
    }
    return search_list(list->next, x);
}

// Returns the hashed value for an integer
int hash(int x)
{
    return x % 100;
}
