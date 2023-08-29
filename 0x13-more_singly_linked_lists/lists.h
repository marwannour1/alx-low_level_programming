#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct listint_s - singly linked list
 * @n: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const list_t *h);
/**
size_t listint_len(const list_t *h);
listint_t *add_nodeint(list_t **head, const char *str);
listint_t *add_nodeint_end(list_t **head, const char *str);
void free_listint(list_t *head);
*/
#endif /* MAIN_H */
