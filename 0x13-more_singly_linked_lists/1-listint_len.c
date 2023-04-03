#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked
 * @h: linked list to be traversed
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t numnodes = 0;

	while (h)
	{
		numnodes++;
		h = h->next;
	}
	return (numnodes);
}

