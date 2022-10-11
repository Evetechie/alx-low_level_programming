#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Ghost", 2.5, "Eve");
	printf("My name is %s, and I am %. If :) - woof!\n", my_dog.name, my_dog.age);
	return (0);
}
