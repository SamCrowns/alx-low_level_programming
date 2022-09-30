#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * Return: integer
 * @s: Variable
 */
int _strlen(char *s)
{
	int z = 0;

	while (*(s + z))
		z++;
	return (z);
}
