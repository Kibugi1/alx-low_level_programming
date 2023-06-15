#include "lists.h"

/**
 * print_dlistint - a function that prints all elements of a dlistint_t list
 *
 * @h: a pointer to head
 *
 * Return: The number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t elementscount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elementscount++;
	}
	return (elementscount);
}
