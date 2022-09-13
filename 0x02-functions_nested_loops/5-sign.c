#include "main.h"
/**
 * print_sign - funtion that prints a number's sign
 * @n: the number whose sign we want to print
 * Return: 1 if n is positive, -1 if n is negative and 0 if 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
