#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer 2
 * @b: pointer 3
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
