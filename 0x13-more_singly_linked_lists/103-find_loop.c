#include "lists.h"

/**
 * find_listint_loop - this function finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i = head;
	listint_t *p = head;

	if (!head)
		return (NULL);

	while (i && p && p->next)
	{
		p = p->next->next;
		i = i->next;
		if (p == i)
		{
			i = head;
			while (i != p)
			{
				i = i->next;
				p = p->next;
			}
			return (p);
		}
	}

	return (NULL);
}
