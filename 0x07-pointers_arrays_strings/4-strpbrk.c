#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: strong to be checked
 * @accept: string to check against
 *
 * Return: pointer to byte in s that matches or NULL if no match
 */
char _strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
		if (*s == accept[b])
		return (s);
		}
	s++;
	}
}
