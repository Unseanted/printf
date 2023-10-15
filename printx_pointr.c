#include "main.h"
/**
 * printx_pointr - function that prints a pointer
 * @val: value
 * Return: int
 */

int printx_pointr(va_list val)
{
	void *p;
	char *s;
	long int a;
	int i, b;

	p = va_arg(val, void *);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchr(s[i]);
		return (i);
	}
	a = (unsigned long int)p;
	_putchr('0');
	_putchr(x);
	b = printx_hex_prt(a);
	return (b + 2);
}
