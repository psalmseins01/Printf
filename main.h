#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>
/**
 * format - structure
 * match - new name 
 */

typedef struct format
{
	char *id;
	int (*f)();
} match;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_chr(va_list v);
int printf_str(va_list v);
int _strlen(char *str);
int _strlenc(const char *str);
int print_percent(void);
int print_dec(va_list args);
int print_int(va_list args);
int print_bin(va_list v);
int print_unsigned(va_list args);
int print_octal(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX_extra(unsigned int num);
int print_non_printable(va_list val);
int print_pointer(va_list val);
int print_hexadec_extra(unsigned long int num);
int print_revs(va_list val);
int print_rot13(va_list val);

#endif
