#include "main.h"

/**
* wildcmp - compares two strings and returns 1 if identical
* @sOne: string to be checked
* @s2: pattern to be used
*
* Return: 1 if identical, 0 otherwise
*/

int wildcmp(char *sOne, char *s2)
{
	if (*s2 == '\0')
		return (*sOne == '\0');
	if (*s2 == *sOne)
		return (*sOne != '\0' && wildcmp(sOne + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(sOne, s2 + 1) || (*sOne != '\0' && wildcmp(sOne + 1, s2)));
	return (0);
}

