
#include "lists.h"

/**
  * list_len - print elements of a list_t
  * @h: head of list
  *
  * Return: number of nodes
  */
size_t list_len(const list_t *h)
{
	unsigned int num_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}

