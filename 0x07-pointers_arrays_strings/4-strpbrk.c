#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: strong to be checked
 * @accept: string to check against
 *
 * Return: pointer to byte in s that matches or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}
	return ('\0');
}
