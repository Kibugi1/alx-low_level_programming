#include "lists.h"

/**
 * *insert_nodeint_at_index - function that inserts a
 * new node at a given position
 * @idx: index of the list where the new node should be added
 * @head: The first node in the list
 * @n: The data to be stored at node of new node
 * Returns: the pointer to the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);


	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		new = *head;

		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;

			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
