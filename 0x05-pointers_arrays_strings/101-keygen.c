#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point generates a random password
 *
 * Return: the generated password
 */

int main(void)
{
	char a;
	int b;

	srand(time(0));
	while (b <= 2645)
	{
		a = rand() % 128;
		b += a;
		putchar(a);

	}
	putchar(2772 - b);

	return (0);
}

