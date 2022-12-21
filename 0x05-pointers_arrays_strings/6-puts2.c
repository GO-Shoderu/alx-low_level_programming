#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - entry level.
 * @str: input from user
 */

void puts2(char *str)
{
	int iter;

	for (iter = 0; iter < _strlen(str); iter += 2)
	{
		_putchar(str[iter]);
	}

	_putchar(10);
}
