#include "sort.h"

/**
 * insertion_sort_list - Sort a doubly linked list using insertion sort.
 * @list: A pointer to the head of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *next_node;

if (!list || !(*list) || !(*list)->next)
return;
current = *list;
while (current && current->next)
{
next_node = current->next;
while (next_node && current->n > next_node->n)
{
swap_nodes(list, current, next_node);
print_list(*list);
next_node = current->next;
}
current = current->next;
}
}
