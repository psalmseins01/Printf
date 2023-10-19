#include "main.h"
/**
 * printf_chr - function to print character
 * @v: function argument
 * Return: return 1
 */

int printf_chr(va_list v)
{
	char ch;

	ch = va_arg(v, int);
	_putchar(ch);
	return (1);
}
