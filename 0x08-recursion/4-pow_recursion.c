#include "main.h"
/**
* _pow_recursion - function that returns the
* value of base raised to the power of exponent
*@base: the base
*@exponent: the exponent
*Return: the value of base raised to the power of exponent
*/
int _pow_recursion(int base, int exponent)
{
		if (exponent < 0)
			return (-1);
		else if (exponent == 0)
			return (1);
		return (_pow_recursion(base, exponent - 1) * base);
}
