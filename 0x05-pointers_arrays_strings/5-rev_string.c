#include "main.h"
/**
 * rev - function that reverses a string
 * Return: void
 * @a: first parameter
 * @b: Second parameter
 */
void rev(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0;

	while (*(s + i))
		i++;
	i--;
	while (i > j)
	{
		rev(s + i, s + j);
		j++;
		i--;
	}
}
