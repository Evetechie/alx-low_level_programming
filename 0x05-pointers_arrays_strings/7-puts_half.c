#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int index = 0;
	int i;

	for (index = 0; str[index]; index++)
		;
	/* get odd lengths */

	if (index % 2 == 1)
	{
		i = (index - 1) / 2;
		i += 1;
	}
	else
	{
		i = index / 2;
	}
	for (; i < index; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
