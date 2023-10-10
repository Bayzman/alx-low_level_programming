#ifndef DOG
#define DOG
#include <stdio.h>

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

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
