#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  a function that allocates memory for an array
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: returns pointer to allocated space, or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x = 0;
	char *space;

	if (nmemb == 0 || size == 0)
		return (NULL);
	space = malloc(nmemb * size);
	if (space == NULL)
		return (NULL);
	for (; x < nmemb * size; x++)
		*(space + x) = 0;
	return (space);
}
