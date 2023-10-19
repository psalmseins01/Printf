#include "main.h"
/**
 * print_hexadec_extra - convert decimal to hex
 * @num: function argument
 * Return: return counter
 */

int print_hexadec_extra(unsigned long int num)
{
	long int counter = 0;
	long int i;
	long int *store;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	store = malloc(sizeof(long int) * counter);
	for (i = 0; i < counter; i++)
	{
		store[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = counter - 1; i >= 0; i++)
	{
		if (store[i] > 9)
			store[i] = store[i] + 39;
		_putchar(store[i] + '0');
	}
	free(store);
	return (counter);
}
