#include "lists.h"

/**
  * free_list - this frees a list
  * @head: pointer to the first node
  */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		tmp = head;
		free(head->str);
		head = head->next;
		free(tmp);
	}
}
