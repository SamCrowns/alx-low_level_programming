#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: The string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, j = 0;
	char c;

	c = *str;
	while (c)
	{
		i++;
		c = *(str + i);
	}
	i--;
	while (j <= i)
	{
		_putchar(*(str + j));
		j += 2;
	}
	_putchar('\n');
}
