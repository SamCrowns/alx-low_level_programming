#include <stdio.h>
#include "main.h"
/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	long int j, k, f, sum;

	j = 1;
	k = 2;
	f = 0;
	sum = 0;
	while (f <= 4000000)
	{
		f = k + j;
		if (k % 2 == 0)
			sum += k;
		j = k;
		k = f;
	}
	printf("%ld\n", sum);
	return (0);
}
