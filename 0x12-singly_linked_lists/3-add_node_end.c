#include "lists.h"
int len(const char *str);

/**
 *new_node - a function that creates a new node
 *@str: a string added to the created node
 *
 *Return: a pointer
 */
list_t *new_node(const char *str)
{
	list_t *end_node;

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->str = strdup(str);
	end_node->len = len(str);
	end_node->next = NULL;
	return (end_node);
}
/**
 *add_node_end - a function that add node at the end
 *@str: a string to be added
 *@head: head of the list
 *
 * Return: a pointer to the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *end_node;

	tmp = *head;
	if (head == NULL)
	{
		return (NULL);
	}
	end_node = new_node(str);

	if (end_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = end_node;
		return (*head);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = end_node;
	return (*head);
}
/**
 *len - prints the length of the given string
 *@str: string its length to be counted
 *
 *Return: length of the string
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
	{
		return (0);
	}
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
