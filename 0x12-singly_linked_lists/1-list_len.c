#include "lists.h"

/**
 * list_len - finds the number of nodes in a linked list
 *@h: pointer to the list
 *
 *Return: the number of nodes
*/

size_t	list_len(const list_t *h)
{
	size_t	node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
