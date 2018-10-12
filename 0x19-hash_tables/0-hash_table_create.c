#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table of size size
 *@size: the size of the array
 *Return: a pointer to the newly created hash table or NULL if fail
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;
	unsigned long int i;

	if (size != 0)
		new = malloc(sizeof(*new));

	if (new != NULL)
	{
		new->array = malloc(sizeof(*new->array) * size);
		new->size = size;
		if (new->array == NULL)
		{
			free(new);
			return (NULL);
		}
		for(i = 0; i < size; i++)
			new->array[size] = NULL;
	}
	return (new);
}
