#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * print_list - function will  print members of a linked list
 * @h: pointer to the 1st membe of the linked list(head)
 * Return: sze of the linked list
 */
size_t print_list(const list_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		num_of_nodes++;
		h = h->next;
	}

	return (num_of_nodes);
}
