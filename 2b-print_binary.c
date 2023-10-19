#include "main.h"
/**
 * print_bin - function to print binary
 * @v: function parameter
 * Return: return binary value
 */
int print_bin(va_list v)
{
	int count = 0;
	int flag = 0;
	int i, b;
	int a = 1;

	unsigned int num = va_arg(v, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (32 - i)) & num);
		if (p >> (32 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
