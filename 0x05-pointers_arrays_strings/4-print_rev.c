#include "main.h"

/**
 * print_rev - entry level.
 * @s: input from user
 */

void print_rev(char *s)
{
	int iter;

	for (iter = 0; s[iter] != '\0';)
        {
                iter++;
        }

	for (; iter >= 0; iter--)
	{
		_putchar(s[iter]);
	}

	_putchar(10);
}
