#include "main.h"

void print_uint(unsigned int n);

/**
 * print_number - prints an integer
 * @n: The integer to print
 *
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
