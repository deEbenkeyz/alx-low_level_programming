#include "main.h"

/**
 * print_numbers - check the code
 *
 * Return: THe numbers since 0 up to 9
 */

void print_numbers(void)
{
	int val;

	for (val = 0; val <= 9; val++)
	{
		_putchar(val + '0');
	}

	_putchar('\n');
}
