#include "main.h"

/**
 * cap_string - capitalizes all word of a string
 * @s: the string
 * Return: str with it's words capitalized
 */
char *cap_string(char *s)
{
	int a, i = 0;

	int sep[] = {9, 10, 32, 44, 59, 46, 33, 63, 34, 28, 29, 123, 125};

	if (s[i] >= 97 && s[i] <= 122)
		s[i] = s[i] - 32;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (a = 0; a <= 12; a++)
		{
			if (s[i] == sep[a])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
					s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
