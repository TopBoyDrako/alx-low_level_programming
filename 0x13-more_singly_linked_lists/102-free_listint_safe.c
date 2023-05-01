#include "lists.h"

/**
 * free_listint_safe - functon that frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t _al = 0;
	int p;
	listint_t *ai;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		p = *h - (*h)->next;
		if (p > 0)
		{
			ai = (*h)->next;
			free(*h);
			*h = ai;
			_al++;
		}
		else
		{
			free(*h);
			*h = NULL;
			_al++;
			break;
		}
	}

	*h = NULL;

	return (_al);
}
