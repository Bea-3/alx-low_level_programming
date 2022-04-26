#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s: source string
 * @accept: accepted string
 *
 * Return: number of bytes in initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, m = 0;

	while (accept[a])
	{
		b =0;
		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				m++;
			}
			b++
		}
		a++
	}
	return (m);
}
