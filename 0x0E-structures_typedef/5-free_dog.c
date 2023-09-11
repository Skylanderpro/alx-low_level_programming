#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog structure.
 * @d: Pointer to the dog structure to be freed.
 *
 * Description:
 * This function frees the memory allocated for a dog structure,
 * including the memory for the name and owner strings.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{ /* Check if the pointer to the dog structure is not NULL */
		if (d->name != NULL)
			free(d->name); /* Free the name string if it's not NULL */
		if (d->owner != NULL)
			free(d->owner); /* Free the owner string if it's not NULL */
		free(d); /* Free the dog structure */
	}
}
