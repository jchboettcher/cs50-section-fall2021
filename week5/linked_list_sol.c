#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int number;
    struct node *next;
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

		// TODO: Add new node to head/tail of linked list.
        if (strcmp(start_or_end, "start") == 0)
        {
		        list = add_node_to_start(list, x);
        }
        else
        {
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
    node *n = malloc(sizeof(node));
    n->number = x;
    n->next = list;
	  return n;
}

// Adds a node with x at END of list
node* add_node_to_end(node *list, int x)
{
    if (list == NULL)
    {
        node *n = malloc(sizeof(node));
        n->number = x;
        n->next = NULL;
        return n;
    }
    list->next = add_node_to_end(list->next, x);
    return list;
}

// prints nodes in a list from first to last
void print_nodes(node *list)
{
    if (list == NULL)
    {
        return;
    }
    printf("%i\n", list->number);
    print_nodes(list->next);
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