#include "main.h"
/**
* printx_rot13 -  function name to convert to rot13
* @val: arguments it holds
* Return: counter
*/

int printx_rot13(va_list val)
{
	int i, j, counter = 0;
	int k = 0;
	char *s = va_arg(val, char *s);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmnNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
			s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
	for (j = 0; a[j] && !k; j++)
	{
		if (s[i] == a[j])
	{
			_putchr(b[j]);
			counter++;
			k = 1;
	}
		}
		if (!k)
		{
			_putchr(s[i]);
			counter++;
		}
	}
	return (counter);
}
