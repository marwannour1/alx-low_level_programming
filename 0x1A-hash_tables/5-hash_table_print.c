#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int i;
	char flag = 0;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
			}

			printf("'%s': '%s'", temp->key, temp->value);
			flag = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
