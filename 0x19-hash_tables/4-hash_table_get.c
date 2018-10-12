#include "hash_tables.h"

/**
 *hash_table_get - retrives a value associated with a key
 *@ht: the hash table
 *@key: the key of the value to grab
 *Return: the value of that key or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int idx;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	idx = key_index((unsigned char *) key, ht->size);
	if (ht->array[idx] != NULL)
	{
		current = ht->array[idx];
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
				return (current->value);
			if (current->next == NULL)
				return (NULL);
			current = current->next;
		}
	}
	return (NULL);
}
