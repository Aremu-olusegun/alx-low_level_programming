#include "main.h"

/**
* is_palindrome - returns true if the given string is truly a palindrome
*@strs: string to check
*Return: true if the given string is a palindrome
*/

int is_palindrome(char *strs)
{
	int index = 0;
	int len = find_strlen(strs);

	if (!(*strs))
		return (1);

	return (check_palindrome(strs, len, index));
}

/**
 * find_strlen - Returns the length of a string.
 * @strs: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *strs)
{
	int len = 0;

	if (*(strs + len))
	{
		len++;
		len += find_strlen(strs + len);
	}

	return (len);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @strs: The string to be checked.
 * @len: The length of strs.
 * @index: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int check_palindrome(char *strs, int len, int index)
{
	if (strs[index] == strs[len / 2])
		return (1);

	if (strs[index] == strs[len - index - 1])
		return (check_palindrome(strs, len, index + 1));

	return (0);
}
