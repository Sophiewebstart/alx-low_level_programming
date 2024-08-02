#include "lists.h"

/**
  * list_len - length of the list
  * @h: head of the list
  *
  * Return: number of elements in the list
  */
size_t list_len(const list_t *h)
{
	int i;

	while (h->next == NULL)
	{
		return (0);
	}

	for (i = 1; h->next != NULL; i++)
		h = h->next;
	return (i);
}
