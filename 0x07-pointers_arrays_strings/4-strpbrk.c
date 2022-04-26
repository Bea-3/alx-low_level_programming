#include "main.h"

/**
 * _strpbrk - searches a string for set of bytes
 * @s: source string
 * @accept: accepted string
 *
 * Return: pointer to byte in s that matches accept
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
