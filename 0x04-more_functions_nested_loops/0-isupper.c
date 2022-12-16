#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks code
 *  @c: input character.
 *  Return: 1 if is an uppercase character, 0 in other case.
 */

int _isupper(int c)
{
	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
