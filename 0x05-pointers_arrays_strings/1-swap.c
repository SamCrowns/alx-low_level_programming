#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * Return: void
 * @a: First
 * @b: second
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
