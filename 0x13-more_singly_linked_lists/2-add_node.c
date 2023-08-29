#include "lists.h"

/**
  * add_node - print elements of a list_t
  * @head: head of list
  * @str: dghfd
  * Return: number of nodes
  */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new = malloc(sizeof(list_t));

	if (!head || !new)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		while (new->str[i])
			i++;
		new->len = i;
	}
	new->next = *head;
	*head = new;
	return (new);
}

