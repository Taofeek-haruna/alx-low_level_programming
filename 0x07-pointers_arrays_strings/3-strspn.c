#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the initial segment of
 * @accept: which consist only of bytes from
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)

{

	int p = 0, r, q;


	for (r = 0; s[r] != '\0'; r++)

	{

		if (s[r] != 32)

		{

			for (q = 0; accept[q] != '\0'; q++)

			{

				if (s[r] == accept[q])

					p++;

			}

		}

		else

			return (p);

	}

		return (p);



}
