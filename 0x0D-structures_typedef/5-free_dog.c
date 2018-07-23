#include<stdlib.h>
#include<stdio.h>
#include"dog.h"

/**
 *free_dog - frees dogs
 *@d: pointer to dog_t we need to free
 *Return: void
 */

void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).owner);
	free(d);
}
