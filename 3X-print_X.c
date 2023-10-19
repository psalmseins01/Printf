#include "main.h"
/**
 * print_HEX - convert decimal to HEX
 * @val: function argument
 * Return: return count
 */

int print_HEX(va_list val)
{
	int counter = 0;
	int i;
	int *store;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	store = malloc(sizeof(int) * counter);
	for (i = 0; i < counter; i++)
	{
		store[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = counter - 1; i >= 0; i++)
	{
		if (store[i] > 9)
			store[i] = store[i] + 7;
		_putchar(store[i] + '0');
	}
	free(store);
	return (counter);
}
