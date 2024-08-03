#include "lists.h"
int len(const char *str);

/**
  * add_node - this adds a new node at the beginning of a list
  * @head: pointer to head of the list
  * @str: string to be inserted to first position
  *
  * Return: the address of new element, or NULL if it failed.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	if (head == NULL)
		return (NULL);
	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	if (*head == NULL)

		n_node->next = NULL;
	else
			n_node->str = strdup(str);
		n_node->len = len(str);
		n_node->next = *head;
		*head = n_node;

	return (*head);
}

/**
 * len - gets the length of string
 * @str: string to get its length
 *
 * Return: length os string
 */
int len(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
