#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list ap;

	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && x < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
