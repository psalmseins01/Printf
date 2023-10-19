#include "main.h"
/**
 * printf_str - function to print string
 * @v: function argument
 * Return: string lenght len
 */

int printf_str(va_list v)
{
	char *str;
	int i;
	int len;

	str = va_arg(v, char*);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}
