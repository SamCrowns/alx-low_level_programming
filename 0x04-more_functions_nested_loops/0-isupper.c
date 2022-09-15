#include "main.h"
/**
 * _isupper - Write a function that checks for uppercase character.
 * @c: The characyer in question
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
