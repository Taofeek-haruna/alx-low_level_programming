#include "main.h"
#include <stdio.h>
/**
* _memset - fills memory
* @size: the size of the memory to print
* @s: is with the constant byte @b
* @b: constant byte and memory area pointer
* @n: byte of the memory area @s pointed to
* Return: 0
*/

char *_memset(char *s, char b, unsigned int n)
{

/* declaring and initiliazing */

unsigned int letter = 0;
while (letter <= n)
{
s[letter] = b;
letter++;
}
return (0);
}
