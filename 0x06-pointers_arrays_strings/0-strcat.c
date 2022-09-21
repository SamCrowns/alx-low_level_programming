#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * Return: char
 * @dest: First var
 * @src: Second var
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k, num;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (i < j)
		num = j;
	else if (i >= j)
		num = i;
	for (k = 0; k < num; k++)
	{
		if (num == j)
			dest[k + num - 1] = src[k];
		else
			dest[k + num] = src[k];
	}
	return (dest);
}
