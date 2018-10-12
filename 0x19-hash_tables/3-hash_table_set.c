#include "hash_tables.h"

/**
 *hash_table_set - adds an element to the hash table
 *@ht: the hash table to add to
 *@key: the key to the new elament
 *@value: the value to the new elament
 *Return: 1 if success 0 if fail
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current = NULL;
	hash_node_t *new = NULL;
	unsigned long int idx;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL ||
	    strlen(value) == 0)
		return (0);

	idx = key_index((unsigned char *) key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->value = strdup(value);
	new->key = strdup(key);
	if (ht->array[idx])
	{
		current = ht->array[idx];
		new->next = current;
		ht->array[idx] = new;
		return (1);
	}
	new->next = NULL;
	ht->array[idx] = new;
	return (1);
}
