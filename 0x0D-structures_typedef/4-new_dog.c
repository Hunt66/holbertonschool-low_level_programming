#include<stdlib.h>
#include<stdio.h>
#include"dog.h"


/**
 *new_dog - creates a new object of type dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner
 *Return: pointer to new dog_t
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *namee = name;
	char *ownere = owner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	(*d).name = namee;
	(*d).age = age;
	(*d).owner = ownere;
	return (d);
}
