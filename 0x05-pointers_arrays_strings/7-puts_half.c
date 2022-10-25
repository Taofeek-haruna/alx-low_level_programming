#include "main.h"
#include <stdio.h>
#include <puts_half.h>
/**
* pouts_half - prints half of a string.
* @puts_half
* @str: input string.
* Return: no return.
*/

void puts_half(char *str)
{
int count = 0, i;

while (count >= 0)
{
if (str[count] == '\0')
break;
count++;
}
if (count % 2 == 1)
i = count / 2;
else
i = (count - 1) / 2;

for (i++; i < count; i++)
putchar(str[i]);
putchar('\n');
}
