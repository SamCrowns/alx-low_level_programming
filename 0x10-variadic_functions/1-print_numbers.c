#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: The required output
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x = 0;

	va_start(ap, n);

	for (x; x < n; x++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && x < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
