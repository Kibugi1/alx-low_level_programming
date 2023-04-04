#include "lists.h"

/**
 * free_listint2 - function that frees a list and sets head to null
 * @head: The pointer  list head to be set to null
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;

}
