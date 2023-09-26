#include "lists.h"

/**
* listint_len - returns the number of elements in a linked lists
* @h: linked list of type listint_t to traverse
*
* Return:return th number of the nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t num_of node = 0;

	while (h)
	{
		num_of_node++;
		h = h->next;
	}

	return (num_of_node);
}
