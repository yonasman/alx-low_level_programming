#include "lists.h"

/**
 *print_list - print all elements
 *@h: a head of the list
 *
 *Return: Always 0
 */
size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (i);
}
