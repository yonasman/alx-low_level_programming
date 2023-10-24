#include "lists.h"

/**
 *add_nodeint_end - adds a node at the end
 *@head: pointer to the head of the list
 *@n: an int to be added
 *
 * Return: address of the node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *tmp;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
	{
		return (NULL);
	}
	end->n = n;
	end->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = end;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = end;
	}

	return (*head);
}
