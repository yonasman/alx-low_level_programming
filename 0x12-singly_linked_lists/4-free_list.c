#include "lists.h"

/**
 *free_list - a function that frees list
 *@head: a head of the list
 *
 *Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (head->next != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(head->str);
	free(head);
}
