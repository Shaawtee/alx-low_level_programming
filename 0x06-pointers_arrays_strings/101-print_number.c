#include "main.h"

void print_uint(unsigned int n);

/**
 * print_number - prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('_');
		n = -n;
	}

	print_uint((unsigned int) n);
}

/**
 * print_uint - prints an unsigned integer
 * @n: The unsigned int to print
 */
void print_uint(unsigned int n)
{
	if (n / 10 != 0)
		print_uint(n / 10);
	_putchar(n % 10 + '0');
}
