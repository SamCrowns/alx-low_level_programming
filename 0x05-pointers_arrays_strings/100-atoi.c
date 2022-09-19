#include "main.h"
/**
 * _atoi - function that convert a string to integer
 * @s: string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, j, p = 1;
	unsigned int n = 0;
	char c;

	while (*(s + i))
		i++;
	i--;
	for (j = 0; j <= i; j++)
	{
		c = *(s + j);
		if (c == '-')
			p *= -1;
		else if (c >= '0' && c <= '9')
			n = n * 10 + (c - '0');
		else if (n > 0)
			break;
	}
	return (p * n);
}
