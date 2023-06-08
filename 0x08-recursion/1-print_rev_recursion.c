#include "main.h"
/**

*   reverse_print - function that prints a string in reverse using recursion.
*@str: parameter string

*/
void reverse_print(char *str)
{
if (*str != '\0')
{
reverse_print(str + 1);
_putchar(*str);
}
}
