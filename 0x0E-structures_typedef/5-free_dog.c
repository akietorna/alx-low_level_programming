#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - frees the dog struct
 *@d: the struct
 *Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
