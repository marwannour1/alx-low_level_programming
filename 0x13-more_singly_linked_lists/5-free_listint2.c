
#include "lists.h"

/**
  * free_listint2 - print elements of a list_t
  * @head: head of list
  *
  * Return: number of nodes
  */
void free_listint2(listint_t **head)
{
	listint_t *node, *next_node;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
	*head = NULL;
}

