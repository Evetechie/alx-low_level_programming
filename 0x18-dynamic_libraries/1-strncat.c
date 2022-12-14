#include "main.h"

/**
 * _strncat - like _strcat but will use n bytes from src
 * @dest: string to be concacetated
 * @src: stringt end of dest
 * @n: integer parameter to compare index to
 * Return: return new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
