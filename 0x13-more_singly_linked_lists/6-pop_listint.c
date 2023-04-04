#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * and returns the head node’s data (n)
 * @head: The pointer node to be deleted
 * Return: the data in pointer head
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
