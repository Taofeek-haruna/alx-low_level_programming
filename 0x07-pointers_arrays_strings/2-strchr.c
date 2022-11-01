#include "main.h"
/**
* _strchr - locates string char
* @c: first occurence char
* @s: string that contains char
* Return: pointer to the first occurrence of the character
*/

char *_strchr(char *s, char c)

{

	while (*s)

	{

		if (*s != c)

			s++;

		else

			return (s);

	}

	if (c == '\0')

		return (s);


}
