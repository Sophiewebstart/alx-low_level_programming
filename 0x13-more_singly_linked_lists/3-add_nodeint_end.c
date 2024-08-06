#include "lists.h"

/**
  * add_nodeint_end - this adds a new node at the end of the list
  * @head: pointer to the head of the list
  * @n: number to be added to the end
  *
  * Return: the address of new element, or NULL if failed.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node;
	listint_t *temp;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = n_node;
	}

	return (n_node);
}
