#include <stdlib.h>

#include <unistd.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
