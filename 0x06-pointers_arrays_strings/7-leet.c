#include "main.h"
/**
 * leet -function that encodes a string into 1337
 * @s: parameter of the function
 * Return: s encode into 1337
 */
char *leet(char *s)
{
	int i = 0, j;
	char *letters = "aAeEoOtTlL";
	char *code = "4433007711";

	while (*(s + i))
	{
		for (j = 0; j < 10; j++)
		{
			if (*(s + i) == *(letters + j))
				*(s + i) = *(code + j);
		}
		i++;
	}
	return (s);
}
