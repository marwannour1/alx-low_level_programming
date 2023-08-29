#include "lists.h"

/**
  * print_listint - print elements of a list_t
  * @h: head of list
  *
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	unsigned int num_nodes = 0;

	while (h != NULL)
	{
		printf("[%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}

