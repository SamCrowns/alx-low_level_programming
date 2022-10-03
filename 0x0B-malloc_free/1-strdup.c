#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: The string
 * Return: Char
 */
char *_strdup(char *str)
{
	int i = 0, j;
	char *newStr = NULL;

	while (str[i] != '\0')
	{
		i++;
	}
	newStr = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		newStr[j] = str[j];
	newStr[i] = '\0';
	return (newStr);
}
