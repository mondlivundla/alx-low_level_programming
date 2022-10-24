#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: pointer to head of list
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;

	if (temp == NULL)
		return (0);
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
