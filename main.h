#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

typedef struct format
{
	char *id;
	int (*f)();
} match;

int _strlen(char *s);
int _strlenc(const char *str);
int _putchr(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_strings(va_list val);
int printx_37(void);
int printx_dec(va_list args);
int printx_int(va_list args);
int printx_bin(va_list val);
int printx_unsigned(va_list args);
int printx_oct(va_list val);
int printx_hex(va_list val);
int printx_HEXs(va_list val);
int printx_non_prt(va_list val);
int printx_HEX_prt(unsigned int num);
int printx_hex_prt(unsigned long int num);
int printx_pointr(va_list val);
int printx_rev(va_list val);
int printx_rot13(va_list val);
int _putchr(char c);

#endif
