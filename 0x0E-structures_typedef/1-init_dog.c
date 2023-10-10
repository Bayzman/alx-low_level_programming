#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @struct dog d: struct dog
 * @name: char pointer
 * @age: float
 * @owner: char point
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
