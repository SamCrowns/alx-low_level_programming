#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: Value passed in for array creation
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
