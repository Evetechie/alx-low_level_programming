#include <stdio.h>

/**
 * hare - prints a function before the
 * executed before main
 * Return: return nothing
 */
void __attribute__ ((constructor)) hare()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
