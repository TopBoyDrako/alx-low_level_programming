#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *al;
	listint_t *am = *head;

	al = malloc(sizeof(listint_t));
	if (!al || !head)
		return (NULL);

	al->n = n;
	al->next = NULL;

	if (idx == 0)
	{
		al->next = *head;
		*head = al;
		return (al);
	}

	for (p = 0; am && p < idx; p++)
	{
		if (p == idx - 1)
		{
			al->next = am->next;
			am->next = al;
			return (al);
		}
		else
			am = am->next;
	}

	return (NULL);
}
