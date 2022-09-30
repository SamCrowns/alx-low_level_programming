#include "main.h"

/**
 * _strncpy - function that copies the string pointed by src
 * @dest: the first string
 * @src: second parameter
 * @n: bytes from src that the function will use
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
