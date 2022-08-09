#include "main.h"

/**
* print_ch - prints character
* @args: argument list
*
* Return: always 1
*/
 
int print_ch(va_list args)
{
	_putchar(va_arg(args, int));

	return (1);
}
