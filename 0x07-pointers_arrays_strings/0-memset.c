#include "main.h"
/**
 * _memeset - fills memory with a constant byte
 * @s: source string
 * @b: constant byte for filling
 * @n: length of buffer
 * Return: new string
 */
char *_memset(char *s, char b,  unsigned int n);
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
