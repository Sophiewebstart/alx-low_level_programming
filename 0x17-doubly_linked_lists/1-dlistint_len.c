#include "lists.h"

/**
 * dlistint_len - length of the list
 * @h: pointer to the first node
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n_num = 0;

	while (h)
	{
		n_num++;
		h = h->next;
	}

	return (n_num);
}
