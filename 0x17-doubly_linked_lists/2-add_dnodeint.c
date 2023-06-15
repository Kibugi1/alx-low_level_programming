#include "lists.h"

/**
 * add_dnodeint - a func that adds a new node at the beginning of a
 * dlistint_t list.
 *
 * @head: a pointer to the head of linked list
 * @n: the data of new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newnode;
	}

	*head = newnode;

	return (newnode);
}
