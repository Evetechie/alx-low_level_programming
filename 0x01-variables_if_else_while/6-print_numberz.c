#include <stdio.h>

/**
 * main - prints the number since 0 - 9
 *
 * Return: Always (Success)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
