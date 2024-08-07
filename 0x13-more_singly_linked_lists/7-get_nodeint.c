#include "lists.h"

/**
  * get_nodeint_at_index - this retrieves a node at an index
  * @head: pointer to the first element in the list
  * @index: the index of the node, starting at 0
  *
  * Return: the nth node of the linked list
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	while (head == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
