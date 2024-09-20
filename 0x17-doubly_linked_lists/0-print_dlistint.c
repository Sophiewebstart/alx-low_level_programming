#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: head of list
 *
 * Return: total number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_num = 0;

	while (h)
	{
		n_num++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (n_num);
}

