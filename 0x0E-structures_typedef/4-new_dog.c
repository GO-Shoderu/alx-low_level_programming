#include <stdlib.h>
#include "dog.h"
#include "2-strlen.c"
#include "2-strncpy.c"

/**
 * new_dog - entry
 * @name: user input
 * @age: user input
 * @owner: user input
 *
 * Return: returns a struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	if (name != NULL && owner != NULL)
	{
		puppy = malloc(sizeof(dog_t));

		if (puppy == NULL)
			return (NULL);

		puppy->name = malloc(sizeof(char) * (_strlen(name) + 1));

		if (puppy->name == NULL)
		{
			free(puppy);
			return (NULL);
		}

		puppy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

		if (puppy->owner == NULL)
		{
			free(puppy->name);
			free(puppy);
			return (NULL);
		}

		puppy->name = _strncpy(puppy->name, name);
		puppy->owner = _strncpy(puppy->owner, owner);
		puppy->age = age;
	}

	return (puppy);
}
