#include "sort.h"



/**
* swap_nodes - Swap two nodes in the doubly linked list.
* @list: The head of the list.
* @node1: The first node.
* @node2: The second node.
*/
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (!node1 || !node2)
		return;

	node1->next = node2->next;
	if (node2->next)
		node2->next->prev = node1;

	node2->prev = node1->prev;
	if (node1->prev)
		node1->prev->next = node2;

	node1->prev = node2;
	node2->next = node1;

	if (!node2->prev)
		*list = node2;
}


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
