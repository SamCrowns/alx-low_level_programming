#include "main.h"
/**
 * _abs - function that compute the absolute value of an integers
 * @n: the variable
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
