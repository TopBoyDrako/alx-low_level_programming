#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 on success, or -1 on fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ai = *head;
	listint_t *p = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ai);
		return (1);
	}

	while (i < index - 1)
	{
		if (!ai || !(ai->next))
			return (-1);
		ai = ai->next;
		i++;
	}


	p = ai->next;
	ai->next = p->next;
	free(p);

	return (1);
}
