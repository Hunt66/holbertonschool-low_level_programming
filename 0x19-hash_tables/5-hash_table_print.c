#include "hash_tables.h"

/**
 *hash_table_print - prints the hash table
 *@ht: the hash table to be printed
 *Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int idx;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			current = ht->array[idx];
			while (current != NULL)
			{
				if (flag == 0)
				{
					printf("'%s': '%s'", current->key
					       , current->value);
					flag = 1;
					current = current->next;
					continue;
				}
				printf(", '%s': '%s'", current->key,
				       current->value);
				current = current->next;
			}
		}
	}
	printf("}\n");
}
