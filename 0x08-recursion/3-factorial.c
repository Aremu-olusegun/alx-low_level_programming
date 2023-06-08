#include "main.h"

/**
* factorial - searches for the factorial of a number
* @num: the number to find the factorial of
*
* Return: the factorial of the number
*/

int factorial(int num)
{
	int nextnum;

	if (num == 0)
		return (1);
	else if (num < 0)
	return (-1);

	nextnum = factorial(num - 1);
	return (num * nextnum);
}
