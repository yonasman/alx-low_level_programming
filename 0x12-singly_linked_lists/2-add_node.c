#include "lists.h"

int len(const char *str);
/**
 *add_node - a function that adds a new node
 *@head: head of the list
 *@str: a string to be added fto the new node
 *
 *Return: a new added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *added_node;

	if (head == NULL)
	{
		return (NULL);
	}
	added_node = malloc(sizeof(list_t));

	if (added_node == NULL)
	{
		return (NULL);
	}
	else
	{
		added_node->next = *head;
		added_node->str = strdup(str);
		added_node->len = len(str);
		*head = added_node;
	}
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
