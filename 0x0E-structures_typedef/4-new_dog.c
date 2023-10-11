#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dog_t new_dog - create a new dog
 * @name: char array
 * @age: float
 * @owner: char array
 * Description: new_dog
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));

	if (new_d == NULL)
		return (NULL);

	new_d->name = name;
	new_d->age = age;
	new_d->owner = owner;

	return (new_d);
}
