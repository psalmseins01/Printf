#include "main.h"
/**
 * _printf - simulates printf
 * @format: argument
 * Return: return strings
 */
int _printf(const char *format, ...)
{
	match a[] = {{"%c", printf_chr}, {"%s", printf_str}, {"%%", print_percent},
		{"%d", print_dec}, {"%i", print_int}, {"%b", print_bin},
		{"%u", print_unsigned}, {"%o", print_octal}, {"%x", print_hex},
		{"%X", print_HEX}, {"%S", print_non_printable},
		{"%p", print_pointer}, {"%r", print_revs}, {"%R", print_rot13}};

	va_list args;
	int i = 0, len = 0;
	int j;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (a[j].id[0] == format[i] && a[j].id[1] == format[i + 1])
			{
				len = len + a[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);

}
