#include "main.h"

/**
 * print_alphabet - Prints lowercase aphabets
 *
 * Return - Always returns 0
 */

void print_alphabet(void)
{
	int j;

	for (j = 97; j < 123; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
