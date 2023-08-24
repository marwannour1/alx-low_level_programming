#include "lists.h"

/**
  * free_list - print elements of a list_t
  * @head: head of list
  *
  * Return: number of nodes
  */
void free_list(list_t *head)
{
	list_t *node, *next_node;
	if (!head)
		return;
	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
}

