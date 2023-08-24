#include "lists.h"

/**
  * print_list - print elements of a list_t
  * @h: head of list
  *
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	unsigned int num_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}

