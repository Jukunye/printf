#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...);

/**
 * _printf - prints a formated string to output stream
 *  @format: the format string
 *
 *  Return: number of characters printed, otherwise (-1).
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0, num;
	char buffer[1024];
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					j += _putchar(va_arg(args, int));
					break;
				case '%':
					j += _putchar('%');
					break;
				case 's':
					j += print(va_arg(args, char *));
					break;
				case 'd':
					num = va_arg(args, int);
					i_to_str(buffer, num);
					j += print(buffer);
					break;
				case 'i':
					num = va_arg(args, int);
					i_to_str(buffer, num);
					j += print(buffer);
					break;
				default:
					j += _putchar(format[i]);
					break;
			}
		}
		else
		{
			j += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (j);
}
