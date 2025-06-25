#include <stdlib.h>
#include "dog.h"

int str_len(char *str);
void copystr(char *src, char *dest);

/**
 *new_dog - create a new dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: Pointer to the new dog location
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *dupname;
	char *dupowner;
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	dupname = malloc((str_len(name) + 1) * sizeof(char));
	if (dupname == NULL)
	{
		free(dog);
		return (NULL);
	}
	dupowner = malloc((str_len(owner) + 1) * sizeof(char));
	if (dupowner == NULL)
	{
		free(dupname);
		free(dog);
		return (NULL);
	}
	copystr(name, dupname);
	copystr(owner, dupowner);
	dog->name = dupname;
	dog->owner = dupowner;
	dog->age = age;
	return (dog);
}

/**
 *str_len - finds length of a string
 *@str: the string
 *Return: length of the string
 */

int str_len(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}


/**
 *copystr - copy a string
 *@src: the source string
 *@dest: destination string
 *Return: Nothing
 */

void copystr(char *src, char *dest)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
}
