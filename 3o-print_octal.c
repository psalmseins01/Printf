#include "main.h"
/**
 * print_octal - function to print octal digits
 * @val: function argument
 * Return: return counter
 */

int print_octal(va_list val)
{
	int i, counter = 0;
	int *store;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		counter++;
	}
	counter++;
	store = malloc(sizeof(int) * counter);
	for (i = 0; i < counter; i++)
	{
		store[i] = temp % 8;
		temp = temp / 8;
	}
	for (i = counter - 1; i >= 0; i--)
		_putchar(store[i] + '0');
	free(store);
	return (counter);
}
