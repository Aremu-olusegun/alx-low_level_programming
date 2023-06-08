#include "main.h"
/**
* _strlen_recursion - gives length of a string
* @s12: string to be measured
*Return: length of the string
*/

int _strlen_recursion(char *s12)
{
	int lens = 0;

	if (*s12 != '\0')
	{
		lens++;
		lens += _strlen_recursion(s12 + 1);
	}
	return (lens);
}
