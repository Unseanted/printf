#include "mmain.h"
/**
* _puts - prints a string and a new line
* @str: string to print
* Return: void
*/
int _puts(char *str)
{
	char *s = str;

	while (*str)
		_putchar (*str++);
	return (str = a);
}

/**
* _putchar - writes character to standardd output
*@c: charcater to be printed
* Return: 1
* on error, -1 is returned and error is set appropraitely.
*/
int _putchar(int c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
