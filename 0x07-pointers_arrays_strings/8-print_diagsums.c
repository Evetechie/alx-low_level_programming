#include "main.h"

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sumDiag1, sumDiag2;

	sumDiag1 = 0;
	sumDiag2 = 0;

	for (i = 0; i < size; i++)
	{
		sumDiag1 = sumDiag1 + a[i * size + i];
	}
	for (i = (size - 1); i >= 0; i--)
	{
		sumDiag2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sumDiag1, sumDiag2);
}
