#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line
 * Return: Void
 * @str: the string
 */
void _puts(char *str)
{
	int i = 0;
	char c;

	c = *str;
	while (c)
	{
		_putchar(c);
		i++;
		c = *(str + i);
	}
	_putchar('\n');
}
