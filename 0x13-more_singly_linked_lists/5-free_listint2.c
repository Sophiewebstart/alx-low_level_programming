#include "lists.h"

/**
  * free_listint2 - this function frees a list
  * and sets the head to NULL
  * @head: pointer to the head of the list
  */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL || *head != NULL)
		return;
	while ((*head)->next != NULL)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}
	 free(*head);
	 *head = NULL;
}
