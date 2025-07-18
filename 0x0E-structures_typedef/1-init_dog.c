#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - initializes a variable of type struct dog
 *@d: pointer to the variable
 *@name: the name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("Ok\n");
		exit(98);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
