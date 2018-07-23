#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - initializes a variable of type dog which I just made
 *@d: pointer to structure dog
 *@name:pointer to name of dog
 *@age: age of dog
 *@owner: pointer to owner name of dog
 *Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
