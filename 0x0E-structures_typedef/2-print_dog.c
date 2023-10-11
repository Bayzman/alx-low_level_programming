#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print struct dog
 * @d: object of type struct dog
 * Description: print struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");

	if (d->age == 0)
		printf("Age: 0.000000\n");

	if (d->owner == NULL)
		printf("Owner: (nil)\n");

	if (d == NULL)
		printf("");

	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name,
		       d->age, d->owner);
	}
}
