#include "lists.h"

/**
 *listint_len - prints the number of nodes
 *@h: pointer to the head
 *
 *Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
