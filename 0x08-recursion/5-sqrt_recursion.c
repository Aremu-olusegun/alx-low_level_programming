#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @num: number to be used
*
* Return: the square root of num
*/

int _sqrt_recursion(int num)
{
	if (num == 0 || num == 1)
		return (num);
	return (_sqrt(0, num));
}

/**
 * _sqrt - returns the square root of a number
 * @num: test number
 * @x: squared number
 *
 * Return: the square root of num
 */

int _sqrt(int num, int x)
{
	if (num > x / 2)
		return (-1);
	else if (num * num == x)
		return (num);
	return (_sqrt(num + 1, x));
}
