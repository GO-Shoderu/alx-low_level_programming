#include "main.h"
#include "2-strlen.c"
#include "1-swap.c"

/**
 * rev_string - entry level.
 * @s: input from user
 */

void rev_string(char *s)
{
	int iter;
	int t_size;
	char temp;

	for (iter = _strlen(s), t_size = 0; t_size <= ((_strlen(s) / 2) - 1);)
	{
		temp = *(s + t_size);
		*(s + t_size) = *(s + (iter - 1));
		*(s + (iter - 1)) = temp;
		iter--;
		t_size++;
	}
}
