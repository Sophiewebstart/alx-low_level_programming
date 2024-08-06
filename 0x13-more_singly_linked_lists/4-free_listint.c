#include "lists.h"

/**
  * free_listint - this frees a list
  * @head: pointer to first node on list
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}

}
