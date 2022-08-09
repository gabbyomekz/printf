#include "main.h"

/**
 * _printf - prints anything
 * @format: the format string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int printed_chars = 0;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '%' && format[i]; i++)
	{
	_putchar(format[i]);
	printed_chars += _putchar(format[i]);
	}

	if (format[i] == '%' && format[i + 1] != ' ')
		switch (format[i + 1])
		{
			case 'c':
					printed_chars = print_ch(args);
					break;
			default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
					i += 2;
		}
va_end(args);
return (printed_chars);
}
