#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: will be used in the function
 * Return: 1 if c is lower case else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
