#include "main.h"
/**
 * print_numbers - a function that prints the numbers, from 0 - 9
 *
 * Return: 0-9 followed by new line
 
 */
void print_numbers(void)
{
int i;

        for (i = 0; i <= 9; i++) _putchar(i + '0');
	putchar('\n');
}