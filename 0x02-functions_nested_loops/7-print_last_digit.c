#include "main.h"
/**
 * print_last_digit - function that prints the last digit of number
 * @n: the variable
 * Return: the value of the last digit of n
 */
int print_last_digit(int n)
{
	int d;
	
	if (n < 0)
	{
		d = (n % 10) * -1;
		_putchar(d + '0');
		return (d);
	}
	else
	{
		d = n % 10;
		_putchar(d + '0');
		return (d);
	}
}
