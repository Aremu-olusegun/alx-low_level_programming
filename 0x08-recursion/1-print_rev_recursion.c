#include "main.h"
/**
* _print_rev_recursion - function that prints a string in reverse.
*@s12: parameter string
*
*/
void _print_rev_recursion(char *s12)
{
	if (*s12 != '\0')
	{
		_print_rev_recursion(s12 + 1);
		_putchar(*s12);
	}
}
