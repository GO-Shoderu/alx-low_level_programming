#include "main.h"

/**
 * main- this is the entry point of the program
 * Description: this function prints the alphabets in lowercase
 * Return: this returns a default value of 0
*/

int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);

		if (alphabet == 'z')
		{
			_putchar('\n');
		}
	}

	return (0);
}
