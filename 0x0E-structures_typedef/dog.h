#ifndef DOG
#define DOG
#include <stdio.h>

/**
 * struct dog - struct with name, age, and owner
 * @name: char array
 * @age: float
 * @owner: char array
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
