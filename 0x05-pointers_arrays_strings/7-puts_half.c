#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int size = _strlen(str);

	if (size % 2 != 0)
	{
		i = (size / 2) + 1;
	}
	else
	{
		i = size / 2;
	}
	for (i = 1; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
