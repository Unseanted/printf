#include "main.h"
/**
* printx_dec - function name to print a decimal
* @args: arguments to be printed
* Return: number of characters to be printed
*/
int printx_dec(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchr('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchr(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchr(last + '0');
	return (i);
}
