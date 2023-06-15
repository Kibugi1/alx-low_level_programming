#include "lists.h"

/**
 * dlistint_len -  a function that returns the number of elements in a linked
 * dlistint_t list
 *
 * @h: pointer to head of the linked list
 *
 * Return: elements count in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elementscount = 0;

	while (h != NULL)
	{
		elementscount++;
		h = h->next;
	}

	return (elementscount);
}
