#include "hash_tables.h"

/**
 * create_node - creates a new node
 * @key: key
 * @value: value
 * Return: new node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL, *temp = NULL;
	char *new_value;

	if (ht == NULL || key == NULL || value == NULL || ht->array == NULL ||
		ht->size == 0 || strlen(key) == 0)
	{

		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{

			new_value = strdup(value);
			if (new_value == NULL)
			{
				return (0);
			}

			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}
	new_node = create_node(key, value);
	if (new_node == NULL)
	{
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
