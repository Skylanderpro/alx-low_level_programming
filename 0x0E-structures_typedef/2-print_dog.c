#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints information about a dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Description: This function prints the name,
 * age, and owner of a dog.
 * If any element of the struct is NULL,
 * it prints "(nil)" for that element.
 * If the struct itself is NULL, it does nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
