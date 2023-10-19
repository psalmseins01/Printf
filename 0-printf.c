#include "main.h"
/**
 * _printf - print char according to format
 * @format: string to print
 * Return: return printed string
 */
int _printf(const char *format, ...)
{
	int char_print, str_len = 0;
	va_list list_of_args;
	va_start(list_of_args, format);

	char c = va_arg(list_of_args, int);
	char *str = va_arg(list_of_args, char*);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			char_print++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				char_print++;
			}
			else if (*format == 'c')
			{
				write(1, &c, 1);
				char_print++;
			}
			else if (*format == 's')
			{
				while (str[str_len] != '\0')
					str_len++;
				write(1, str, str_len);
				char_print += str_len;
			}
		}
		format++;
	}
	va_end(list_of_args);
	return (char_print);
}
