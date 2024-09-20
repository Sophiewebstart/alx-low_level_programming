#include "lists.h"
/**
 * add_dnodeint - this adds a new node at the beginning of a list
 * @head: double pointer to head of the list
 * @n: integer to be inserted to first position
 *
 * Return: the address of new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = *head;

	if (*head)
	{
		(*head)->prev = n_node;
	}
	*head = n_node;
	return (n_node);
}
