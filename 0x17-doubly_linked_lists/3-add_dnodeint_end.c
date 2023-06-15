#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 *
 * @n: value of the element
 *
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hd;
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	hd = *head;

	if (hd != NULL)
	{
		while (hd->next != NULL)
			hd = hd->next;
		hd->next = newnode;
	}
	else
	{
		*head = newnode;
	}

	newnode->prev = hd;

	return (newnode);
}
