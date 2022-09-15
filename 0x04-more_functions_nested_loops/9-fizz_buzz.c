#include <stdio.h>
#include "main.h"

/**
 * main - program that prints either number
 * or fizz or buzz or fizzbuzz
 *
 * Return: returns 0
 */

int main(void)
{
	int num = 1;

	while (num++ < 100)
	{
		if ((num % 3) == 0)
		{
			printf("Fizz\n");
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz\n");
		}
		else if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("Fizzbuzz\n");
		}
		else
		{
			printf("%d\n", num);
		}
	}
	return (0);
}
