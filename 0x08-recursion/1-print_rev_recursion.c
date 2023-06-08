#include "main.h"
/**
* _print_reverse_recursion - function that prints a string in reverse.
*@s: parameter string
*
*/
void _print_reverse_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_reverse_recursion(s + 1);
		_putchar(*s);
	}
}
