#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a 
 * linked list, and returns the head node’s data (n)
 * @head: The head pointer to be deleted
 * Return: The head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || *head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
