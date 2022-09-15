#include <stdio.h>

/**
 * main - program that prints either number
 * or fizz or buzz or fizzbuzz
 */

int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz\n");
		else if (i % 5 == 0)
			printf("Buzz\n");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("Fizzbuzz\n");
		else
			printf("%d\n", i);
	}
	return (0);
}
