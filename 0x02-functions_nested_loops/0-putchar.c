#include "main.h"

/**
 * main - Prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int txt[] = {95, 112, 117, 116, 99, 104, 97, 114}
	int j,i;

	i = sizeof(txt) / sizeof(int);
	for (j = 0; j < i; j++)
	{
		_putchar(txt[j]);
	}
	_putchar('\n');
	return (0);
}
