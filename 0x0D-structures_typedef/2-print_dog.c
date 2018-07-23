#include<stdlib.h>
#include<stdio.h>
#include"dog.h"



/**
 *print_dog - prints the input struct dog
 *@d: input dog structure
 *Return: void
 */


void print_dog(struct dog *d)
{
	if (!d)
	{
		return;
	}
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
