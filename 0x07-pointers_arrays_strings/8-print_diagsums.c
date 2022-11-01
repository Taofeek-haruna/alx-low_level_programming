#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 * Return: void
 */

void print_diagsums(int *a, int size)

{

	int t, o, p, l = 0, r = 0;

	for (t = 0; t < size; t++)
	{
		p = (t * size) + t;
		l += *(a + p);
	}
	for (o = 0; o < size; o++)
	{
		p = (o * size) + (size - 1 - o);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}
