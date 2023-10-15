#include "main.h"
/**
* printx_rev - function  name to print str in reverse
* @val: arguments
* Return: the string
*/
int printx_rev(va_list val)
{
	char *s = va_arg(val, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchr(s[i]);
	return (j);
}
