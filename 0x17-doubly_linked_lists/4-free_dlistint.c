#include "lists.h"

/**
  * free_dlistint - this frees a list
  * @head: pointer to the first node
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
