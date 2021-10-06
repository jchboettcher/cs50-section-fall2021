#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    // TODO: Implement node struct.
}
node;

node* add_node_to_start(node*, int);
node* add_node_to_end(node*, int);
void print_nodes(node*);
void free_nodes(node*);

int main(void)
{
    node *list = NULL;

    char* start_or_end = get_string("Add to start or end of list? ");

    while (true)
    {
        int x = get_int("Number: ");
        if (x == INT_MAX)
        {
            printf("\n");
            break;
        }

        if (strcmp(start_or_end, "start") == 0)
        {
            // TODO: Add new node to head of linked list.
		        list = add_node_to_start(list, x);
        }
        else
        {
            // TODO: Add new node to tail of linked list.
            list = add_node_to_end(list, x);
        }
    }

    // TODO: Print all nodes.
    print_nodes(list);

    // TODO: Free all nodes.
	  free_nodes(list);

}

// Adds a node with x at START of list
node* add_node_to_start(node *list, int x)
{
    // TODO
}

// Adds a node with x at END of list
node* add_node_to_end(node *list, int x)
{
    // TODO
}

// Prints nodes in a list from first to last
void print_nodes(node *list)
{
    // TODO
}

// Frees nodes of a linked list
void free_nodes(node *list)
{
    // TODO
}