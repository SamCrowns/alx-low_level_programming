#include "main.h"
/**
 * _strspn - Function to get lengthof a prefix substring
 * @s: The string
 * @accept: string to check against
 * Return: number of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (i);
}
