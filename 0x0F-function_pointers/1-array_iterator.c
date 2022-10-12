#include <stdlib.h>
/**
 * array_iterator - executes a function given as
 * a parameter on each element of array
 * @array: array
 * @size: size of array
 * @action: pointer to the function to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;
	for (; i < size; i++)
		action(array[i]);
}
