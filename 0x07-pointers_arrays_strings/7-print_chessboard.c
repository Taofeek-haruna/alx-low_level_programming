#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 * Return: void
 */

void print_chessboard(char (*a)[8])

{

	int t, o;



	for (t = 0; t < 8; t++)
	{
		for (o = 0; o < 8; o++)
		{
			_putchar(a[t][o]);
		}
		_putchar('\n');
	}
}
