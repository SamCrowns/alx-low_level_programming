#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * Return: void
 * @s: the variable
 */
void print_rev(char *s)
{
	int i, j;
	char c;

	i = 0;
	j = 1;
	while (*(s + i))
		i++;
	c = *(s + i - 1);
	while (c)
	{
		_putchar(c);
		j++;
		c = *(s + i - j);
	}
	_putchar('\n');
}
