#include "main.h"
/**
* printx_non_prt - function name that prints non printable character
* @val:value
* Return: number of characters printed
*/
int printx_non_prt(va_list val)
{
	char *s;
	int i, len = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
			s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i]  32 || s[i] >= 127)
		{
			_putchr('\\');
			_putchr('x');
			len = len + 2;
			value = s[i];
			if (value < 16)
			{
				_putchr('0');
				len++;
			}
			len = len + printx_HEX_prt(value);
		}
		else
		{
			_putchr(s[i]);
			len++;
		}
	}
	return (len);
}
