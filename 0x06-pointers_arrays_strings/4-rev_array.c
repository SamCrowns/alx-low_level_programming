#include "main.h"
/**
 * reverse_array - reverse the content of the array
 * @a: the array to reverse
 * @n: size of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, i = 0;

	n--;
	while (i < n)
	{
		tmp = *(a + n);
		*(a + n) = *(a + i);
		*(a + i) = tmp;
		i++;
		n--;
	}
}
