#include "main.h"
/**
 * print_to_98 - this is the entry point of the program
 * Description: this function returns 1 or 0
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);

		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);

		printf("%d\n", n);
	}
}	
