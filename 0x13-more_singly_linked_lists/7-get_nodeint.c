#include "lists.h"

/**
  * get_nodeint_at_index - this retrieves a node at an index
  * @head: pointer to the first element in the list
  * @index: the index of the node, startint at 0
  *
  * Return: the nth node of the linked list
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i == index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
