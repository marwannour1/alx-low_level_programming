#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *temp = NULL;
    unsigned long int i;

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
            printf("'%s': '%s'", temp->key, temp->value);
            if (temp->next != NULL)
            {
                printf(", ");
            }
            temp = temp->next;
        }

        if (i < ht->size - 1)
        {
            if (ht->array[i + 1] != NULL)
            {
                printf(", ");
            }
        }
    }
}
