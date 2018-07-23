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
	char *namee;
	char *ownere;
	int i;

	for (i = 0 ; name[i] != '\0' ; i++)
		;
	namee = malloc(i + 1);
	if (namee == NULL)
		return (NULL);
	for (i = 0 ; name[i] != '\0' ; i++)
	{
		namee[i] = name[i];
	}
	namee[i] = '\0';
	for (i = 0 ; owner[i] != '\0' ; i++)
		;
	ownere = malloc(i + 1);
	if (ownere == NULL)
		return (NULL);
	for (i = 0 ; owner[i] != '\0' ; i++)
	{
		ownere[i] = owner[i];
	}
	ownere[i] = owner[i];
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	(*d).name = namee;
	(*d).age = age;
	(*d).owner = ownere;
	return (d);
}
