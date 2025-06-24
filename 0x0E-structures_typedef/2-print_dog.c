#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *print_dog - print all properties of a dog
 *@d: pointer to the specific dog
 *Return: Nothing
 */

void print_dog(struct dog *d)
{
	d->name == NULL ? printf("Name: (nil)\n") :
		printf("Name: %s\n", d->name);
	d->age < 0.0  ? printf("Age: (nil)\n") : printf("Age: %f\n", d->age);
	d->owner == NULL ? printf("Owner: (nil)\n") :
		printf("Owner: %s\n", d->owner);
}
