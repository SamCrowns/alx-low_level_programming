#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * Return: char
 * @dest: First string
 * @src: Second String
 * @n: The byte number
 */
char *_strncat(char *dest, char *src, int n)
{
	int ls = 0, ld = 0, y;
	char s;
	while (*(src+ls))
		ls++;
	while (*(dest + ld))
		ld++;
	ls--;
	if (n < ls)
		ls = n;
	while (ls >= 0)
	{
		*(dest + ld + ls) = *(src + ls);
		ls--;
	}
	while (*(dest + y))
		y++;
	*(dest + y) = '\0';
	return (dest);
}
