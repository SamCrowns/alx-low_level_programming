#include "main.h"

/**
 * _strlen - Returns the length of a given string
 * @s: Takes *s as input
 * Return: The length of *S
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
		s++;
	return (i);
}
/**
 * _strncat - a function that concatenates two strings.
 * Return: char
 * @dest: First string
 * @src: Second String
 * @n: The byte number
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (i < _strlen(dest))
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
