#include "mainn.h"

/**
 *  print_numbers - prints numbers between 0 to 9.
 *
 *  Return: no return.
 */

void print_numbers(void)
{
	int k;

	for (k = 48; k < 58; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
