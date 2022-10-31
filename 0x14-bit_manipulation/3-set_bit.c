#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1
 * @n: A pointer to the bit
 * @index:THe index to set the value at - indices startr at 0
 *
 * Return: If an error occurs - -1
 * Otherwise - 1
 */
int set_bit (unsigned long int  *n, unsigned int index)
{
	if (index >= (sizeof(unsigned int ) * 8))
		return (-1);
	*n ^= (1 << index);

	return (1);
}
