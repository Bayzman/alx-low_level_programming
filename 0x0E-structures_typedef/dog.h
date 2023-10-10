#ifndef DOG
#define DOG
#include <stdio.h>
#include "main.h"

/**
 * struct dog - struct with name, age, and owner
 * @name: char array
 * @age: float
 * @owner: char array
 * Description: struct data type
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
