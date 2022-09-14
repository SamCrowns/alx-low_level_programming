#include "main.h"
/**
 * number - function that print number
 * @i: number to print
 * Return: void
 */
void number(int i)
{
	if (i / 100 != 0)
	{
		_putchar(i / 100 + '0');
		_putchar(((i % 100) / 10) + '0');
	}
	else
	{
		_putchar(' ');
		if (i / 10 == 0)
			_putchar(' ');
		else
			_putchar(i / 10 + '0');
	}
	_putchar(i % 10 + '0');
}
/**
 * print_times_table - function that print the n times table, starting with 0
 * @val: the paramater of the function
 * Return: void
 */
void print_times_table(int val)
{
	int n, t, m;

	if (val < 0 || val > 15)
		return;
	if (val == 0)
	{
		_putchar(48);
		_putchar('\n');
		return;
	}
	for (n = 0; n <= val; n++)
	{
		_putchar(48);
		_putchar(',');
		_putchar(' ');
		for (t = 1; t <= val; t++)
		{
			m = n * t;
			number(m);
			if (t != val)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
