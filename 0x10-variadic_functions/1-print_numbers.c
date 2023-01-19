#include "variadic_functions.h"

/**
*print_numbers - entry level
*@separator: user input
*@n: user input
*
*Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list li;
	unsigned int i;

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(li, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(li);

}
