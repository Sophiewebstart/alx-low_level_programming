#include "lists.h"

/**
  * pop_listint - this deletes the head node of a linked list
  * @head: pointer to the first element of a list
  *
  * Return: the head nodes data (n).
  */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmp_head;

	if (head == NULL || *head == NULL)
		return (0);

	tmp_head = *head;
	i = (tmp_head)->n;
	*head = (*head)->next;
	free(tmp_head);

	return (i);
}
