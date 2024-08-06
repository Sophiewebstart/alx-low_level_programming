#include "lists.h"

/**
  * listint_len - length of list
  * @h: pointer to the first node
  *
  * Return: number of nodes in the list
  */
size_t listint_len(const listint_t *h)
{
	size_t i;

	while (h->next == NULL)
	{
		return (0);
	}

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
