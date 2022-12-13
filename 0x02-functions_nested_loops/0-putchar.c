#include "main.h"
/* betty style doc for function main goes there */
/**
 * main- this is the entry point of the program
 *
 * Return: this returns a default value of 0
*/
int main(void)
{
	int i;
	char output[8] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(output[i]);

		if (i == 7)
		{
			_putchar('\n');
		}
	}

	return (0);
}
