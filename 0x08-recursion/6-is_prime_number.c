#include "main.h"

/**
 * evaluate_num - recursion loop
 * @n: number
 * @iterator: number to iterate
 * Return: return 1 or 0
 */

int evaluate_num(int n, int iterator)
{
	if (iterator == n - 1)
	{
		return (1);
	}
	else if (n % iterator == 0)
	{
		return (0);
	}
	if (n % iterator != 0)
	{
		return (evaluate_num(n, iterator + 1));
	}
	return (0);
}
/**
 * is_prime_number - returns 1 if n is a prime
 * @n: number to be checked
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int iterator
		iterator = 2;
	/* only greater than 2*/
	if (n < 2)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

		return (evaluate_num(n, iterator));
}
