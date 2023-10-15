#include "main.h"
/**
 * printx_strings- print a string
 * @val: arguments
 * Return: the length of the string
 */

int printx_strings(va_list val)
{
	char *str;
	int i;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchr(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchr(str[i]);
		return (length);
	}
}
