#include "lists.h"
/**
 * add_dnodeint_end - this adds a new node at the end of a list
 * @head: pointer to head of the list
 * @n: integer to be added to the end
 *
 * Return: the address of new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *n_node, *temp;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	temp = *head;

	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = n_node;
	}
	else
		*head = n_node;
	n_node->prev = temp;

	return (n_node);
}
