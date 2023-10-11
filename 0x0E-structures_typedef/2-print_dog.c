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
	if (d != NULL)
	{
		d->name == NULL ? printf("Name: (nil)\n") :
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		d->owner == NULL ? printf("Owner: (nil)\n") :
			printf("Owner: %s\n", d->owner);
		/*printf("Name: %s\nAge: %f\nOwner: %s\n", d->name,
		  d->age, d->owner); */
	}

	if (d == NULL)
		return;
}
