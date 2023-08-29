#include "lists.h"

/**
  * add_nodeint_end - print elements of a list_t
  * @head: head of list
  * @n: dghfd
  * Return: number of nodes
  */
listint_t *add_node_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!head || !new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (temp)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	else
		*head = new;
	return (new);
}

