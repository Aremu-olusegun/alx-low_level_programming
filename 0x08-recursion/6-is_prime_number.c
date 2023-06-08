#include "main.h"
/**
* is_prime_number - returns true if the number is prime
*@num23: the number to check
*
*Return: true if the number is prime
*/
int is_prime_number(int num23)
{
	int start = num23 / 2;

	if (num23 <= 1)
		return (0);
	return (is_prime(num23, start));
}

/**
* is_prime - returns the 1 if n is prime
* @num23: number to be checked
* @start: number to start checking from
*
* Return: 1 if num23 is prime, 0 otherwise
*/

int is_prime(int num23, int start)
{
	if (start <= 1)
		return (1);
	else if (num23 % start == 0)
		return (0);
	return (is_prime(num23, start - 1));
}
