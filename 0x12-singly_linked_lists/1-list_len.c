#include "lists.h"

/**
 *list_len - prints the number of elements
 *@h: the head of the list
 *
 *Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}

	for (i = 1; h->next != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
