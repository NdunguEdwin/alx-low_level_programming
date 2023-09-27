#include "lists.h"

/**
* print_list - this function will  print all the elements of a list_t list
* @h: pointer to the linked list
* Return: returns number of nodes
*/
size_t print_list(const list_t *h)
{
	int node = 0;

	if (h == NULL)
		return (0);

	const list_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
			ptr = ptr->next;
			node++;
			continue;
		}

		printf("[%d] %s\n", ptr->len, ptr->str);
		node++;
		ptr = ptr->next;

	}

	return (node);
}
