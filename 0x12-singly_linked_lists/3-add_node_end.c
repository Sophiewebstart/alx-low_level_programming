#include "lists.h"
int len(const char *str);

/**
  * add_node_end - this adds a new node at the end of a list
  * @head: pointer to head of the list
  * @str: string to be added to the end
  *
  * Return: the address of new element, or NULL if it failed.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	list_t *temp;

	if (head == NULL)
		return (NULL);
	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);
	n_node->next = NULL;
	n_node->str = strdup(str);
	n_node->len = len(str);

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

/**
 * len - gets the length of string
 * @str: string to get its length
 *
 * Return: length of string
 */
int len(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
