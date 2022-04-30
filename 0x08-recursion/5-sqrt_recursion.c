#include "main.h"

/**
 * _sqrt_recursion - return natural square root of number
 * @n: integer
 * Return: sqrt_recursion
 */

int _sqrt_recursion(int n)
{
	int n = 0;

	if (n < 0) /*if n is negative*/
		return (-1);

	else
	{
		return (_evaluate(n*n)); /*Recursive call*/
	}
}
