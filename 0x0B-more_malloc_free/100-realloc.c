#include "holberton.h"
#include <stdlib.h>



/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: accepted pointer
 *@old_size: the old size of the pointer
 *@new_size: the size of pointer to return
 *Return: void pointer to memory
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *out;
	char *p;
	char *s;

	if (ptr == NULL)
	{
		out = malloc(new_size);
		if (out == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (out);
	}
	if (old_size = new_size)
		return (ptr);
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	out = malloc(new_size);
	if (out == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size > new_size)
		i = new_size;
	if (new_size > old_size)
		i = old_size;
	s = ptr;
	i--;
	for (p = out ; i--; )
	{
		*p++ = *s++;
	}
	*p++ = '\0';
	free(ptr);
	return (out);
}
