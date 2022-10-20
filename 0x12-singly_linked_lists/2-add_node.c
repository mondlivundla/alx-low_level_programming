#include "lists.h"

/**
 * _strlen - finds the length of a string
 * @str: string to be used
 *
 * Return: length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node -> adds a new node at the beginning of list_t list
 * @head: first pointer to head of list_t list
 * @str: string added to list_t
 *
 * Return: the address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (new == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(new->str);
	new->next = *head;

	*head = new;

	return (new);
}
