#include "main.h"
/**
 * _strlenc - function for constant char
 * @str: pointer to a string
 * Return: return i
 */

int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * _strlen - function that counts string lenght
 * @str: pointer parameter
 * Return: return i
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	return (i);
}
