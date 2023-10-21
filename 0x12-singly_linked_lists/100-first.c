#include "lists.h"

/**
 * first - prints You're beat! and yet, you must allow,
 * \nI bore my house upon my back!
 * \n before the main function is executed
 * Return: void
 */

void __attribute__((constructor)) first(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
