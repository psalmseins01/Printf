#include "main.h"
/**
 * print_revs - print string in revers
 * @val: arguments
 * Return: return i
 */

int print_revs(va_list val)
{
	int i = 0, j;
	char *s = va_arg(val, char*);

	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}
