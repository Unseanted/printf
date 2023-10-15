#include "main.h"
/**
 * printx_bin - function name to convert to binary
 * @val: argument
 * Return: integer
 */

int printx_bin(va_list val)
{
	int flag = 0;
	int counts = 0;
	int i, a = 1 b;
	unsigned int num = va_arg(val unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (32 - 1)) & num);
		if (flag)
		{
			b = p >> (32 - i);
			_putchr('0');
			counts++;
		}
	}
	if (counts == 0)
	{
		counts++;
		_putchr('0')
	}
	return (counts);
}
