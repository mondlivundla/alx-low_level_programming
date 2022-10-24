#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data (n) of linked list
 * @head: pointer to head of list
 *
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
