#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: count of arguments
 * @argv: the arguments
 *
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{
	(void) argv;/*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
