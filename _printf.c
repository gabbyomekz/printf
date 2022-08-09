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
	int printed_char = 0;
	va_list args;

	va_start(args, format);
while (format[i])
	{
		while (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					printed_char += print_ch(args);
					i += 2;
					break;
				case '%':
					_putchar('%');
					printed_char++;
					i += 2;
					break;
				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
					i += 2;
			}
		}

		if (format[i])
		{
			_putchar(format[i]);
			printed_char++;
		}

		i++;
	}
	va_end(args);

	return (printed_char);
}
