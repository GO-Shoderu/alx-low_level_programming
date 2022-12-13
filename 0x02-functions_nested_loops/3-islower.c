#include "main.h"

/**
 * _islower - this is the entry point of the program
 * Description: this function returns 1 if the input is a lower case or 0 if otherwise
 * Return: 1 is true and 0 is false
 */

int _islower(int input)
{
	if (input >= 97 && input <= 122)
	{
		return 1;
	}

	return 0;
}
