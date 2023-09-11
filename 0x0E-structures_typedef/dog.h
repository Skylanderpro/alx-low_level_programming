#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Represents information about a dog.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner's name.
 *
 * Description: This struct defines a dog and
 * stores its name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
