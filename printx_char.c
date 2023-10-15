#include "main.h"

/**
* printx_char - prints a char
* @val: arguments
* Return: 1
*/
int printx_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchr(str);
	return (1);
}
