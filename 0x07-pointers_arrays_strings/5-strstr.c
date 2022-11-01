#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 * Return: a pointer beg of substring or @Null if it not foound.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int t = 0, o = 0;

	while (haystack[t])
	{
		while (needle[o] && (haystack[t] == needle[0]))
		{
			if (haystack[t + o] == needle[o])
				o++;
			else
				break;
		}
		if (needle[o])
		{
			t++;
			o = 0;
		}
		else
			return (haystack + t);
	}
	return (0);
}
