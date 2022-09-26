#include "main.h"
/**
 * _memeset - fills memory with a constant byte
 * @s: source string
 * @b: constant byte for filling
 * @n: length of buffer
 * Return: new string
 */
char *_memset(char *s, char b,  unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
