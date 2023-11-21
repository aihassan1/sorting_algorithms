#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @h: A pointer to the head of the doubly-linked list.
 * @node1: A pointer to the first node to swap.
 * @node2: The second node to swap.
 */
void swap_nodes(listint_t **h, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = *node1;
  
	node2->prev = (*node1)->prev;
	node2->next = *node1;
  
	if ((*node1)->prev != NULL)
		(*node1)->prev->next = node2;
    
	else
		*h = node2;
  
	(*node1)->prev = node2;
	*node1 = node2->prev;
}

/**
 * node0ion_sort_list - Sorts a doubly linked list of integers
 *                       
 * @list: A pointer to the head of a doubly-linked list of ints.
 *
 * Description: Prints list after each swap.
 */
void node0ion_sort_list(listint_t **list)
{
	listint_t *node1, *node0, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (node1 = (*list)->next; node1 != NULL; node1 = tmp)
	{
		tmp = node1->next;
		node0 = node1->prev;
		while (node0 != NULL && node1->n < node0->n)
		{
			swap_nodes(list, &node0, node1);
			print_list((const listint_t *)*list);
		}
	}
}
