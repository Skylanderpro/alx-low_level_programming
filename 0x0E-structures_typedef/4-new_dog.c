#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner's name.
 *
 * Description: This function creates a new dog and stores its name,
 * age, and owner's name.
 * It makes copies of the name and owner strings.
 *
 * Return: A pointer to the new dog, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	/* Allocate memory for the new dog */
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails */
	}

	/* Make copies of the name and owner strings */
	newDog->name = strdup(name);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);		
	}
	newDog->owner = strdup(owner);
	if (newDog->owner == NULL)
	{
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	newDog->age = age;

	return (newDog);
}
