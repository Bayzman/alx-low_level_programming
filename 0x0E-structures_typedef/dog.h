#ifndef DOG
#define DOG
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * dog_t - Typedef of struct dog
 */
/* typedef struct dog dog_t; /* defines struct dog as dog_t */ */

/**
 * struct dog - struct with name, age, and owner
 * @name: char array
 * @age: float
 * @owner: char array
 * Description: struct data type
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
