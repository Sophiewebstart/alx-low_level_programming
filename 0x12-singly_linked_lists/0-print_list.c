#include "lists.h"

/**
  * print_list - prints all elements of a single linked list
  * @h: head of list
  *
  * Return: total number of nodes
  */
size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}

	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (i);
}
