#include "lists.h"

/**
 * sum_listint - function that returns the sum of
 * all the data (n) of a linked list
 * @head: The first node in the list
 * Return: Sum of data or 0 if empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);
}
