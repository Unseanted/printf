#include "main.h"
/**
 * handles_printx - function name to handle print formats
 * @fmt: Formatted string in which to print the arguments.
 * @list: List of arguments to be printed.
 * @ind: ind.
 * @width: get width.
 * @buffer: Buffer array to handle print.
 * @flags: Calculates active flags
 * @precision: Precision specification
 * @size: Size specifier
 * Return: 1 or 2;
 */
int handles_printx(const char *fmt, int *ind, va_list list, char buffer[],
	int flags, int width, int precision, int size)
{
	int i, unknow_len = 0, printed_chars = -1;
	fmt_t fmt_types[] = {
		{'c', printx_char}, {'s', printx_string}, {'%', printx_percent},
		{'i', printx_int}, {'d', printx_int}, {'b', printx_bin},
		{'u', printx_unsigned}, {'o', printx_oct}, {'x', print_hexa_dec},
		{'X', printx_hexa_upper}, {'p', print_ptr}, {'S', print_non_prt},
		{'r', printx_rev}, {'R', printx_rot13}, {'\0', NULL}
	};
	for (i = 0; fmt_types[i].fmt != '\0'; i++)
		if (fmt[*ind] == fmt_types[i].fmt)
			return (fmt_types[i].fn(list, buffer, flags, width, precision, size));

	if (fmt_types[i].fmt == '\0')
	{
		if (fmt[*ind] == '\0')
			return (-1);
		unknow_len += write(1, "%%", 1);
		if (fmt[*ind - 1] == ' ')
			unknow_len += write(1, " ", 1);
		else if (width)
		{
			--(*ind);
			while (fmt[*ind] != ' ' && fmt[*ind] != '%')
				--(*ind);
			if (fmt[*ind] == ' ')
				--(*ind);
			return (1);
		}
		unknow_len += write(1, &fmt[*ind], 1);
		return (unknow_len);
	}
	return (printed_chars);
}

