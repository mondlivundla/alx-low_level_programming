Project: 0x13-more_singly_linked_lists
Header file: lists.h

Task 0.Print list
*Aim: write a function that prints all the elements of a listint_t list.
Prototype: size_t print_listint(const listint_t *h);
*Return: the number of nodes

Task 1. List length
Aim: Write a function that returns the number of elements in a linked listint_t list.
Prototype: size_t listint_len(const listint_t *h);
*Return: number of elements in a linked list


Task 2. Add node
Aim: Write a function that adds a new node at the beginning of a listint_t list.
Prototype: listint_t *add_nodeint(listint_t **head, const int n);
*Return: the address of the new element, or NULL if it failed
