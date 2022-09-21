#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 * Return: string
 */
char *rot13(char *str)
{
	int i = 0, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char toggle;

	while (*(str + i))
	{
		toggle = 0;
		for (j = 0; toggle == 0 && j < 53; j++)
		{
			if (*(str + i) == a[j])
			{
				*(str + i) = c[j];
				toggle = 1;
			}
			}
		i++;
	}
	return (str);
}
