#include "main.h"
/**
 * _memeset - fills memory with a constant byte
 * @s: source string
 * @b: constant byte for filling
 * @n: length of buffer
 * Return: new string
 */
char *_memeset(char *s, char b,  unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + 1) = b;
		i++;
	}
	return (s);
}
