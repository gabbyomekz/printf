#include "main.h"

/**
* print_string - prints string
*@str: string to be printed
*
* Return: str
*/

int print_string(char *str)
{
	int i = 0;
	int printed_str = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		printed_str += _putchar(str[i]);
	}
	return (printed_str);
}

/**
 * print_str - Prints a string
 * @args: variable arguments
 *
 * Return: number of characters printed
 */

int print_str(va_list args)
{
	return (print_string(va_arg(args, char *)));
}
