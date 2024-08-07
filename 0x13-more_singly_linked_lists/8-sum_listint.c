#include "lists.h"

/**
  * sum_listint - this adds all the data of a linked list
  * @head: pointer to the first element in a list
  *
  * Return: sum of all the data (n) of the list
  */
int sum_listint(listint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
