#ifndef DOG_H
#define DOG_H

/**
 *struct dog - creates a dog type kinda like an object in c++
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *
 *Description: makes basicly an object dog with various data types
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog;

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* DOG_H */
