#include "main.h"
/**
* printx_hex_prt - function name that converts to hexadecimal
* @num: value to be converted
* Return: counter
*/
int printx_hex_prt(unsigned long int num)
{
	long int i, counter = 0;
	long int *array;
	unsigned long int tem = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(long int) * counter);

	for (i = 0; i < counter; i++)
	{
		array[i] = tem % 16;
		tem = tem / 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
				array[i] = array[i] + 39;
		_putchr(array[i] + '0');
	}
	free(array);
	return (counter);
}
