#include "lists.h"

/**
  * add_nodeint - print elements of a list_t
  * @head: head of list
  * @n: dghfd
  * Return: number of nodes
  */
list_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(list_t));

	if (!head || !new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head != NULL)
		new->next = *head;
	*head = new;
	return (new);
}

