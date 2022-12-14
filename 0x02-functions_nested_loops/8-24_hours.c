#include "main.h"

/**
 * jack_baurer - this is the entry point of the program
 * Description: this function returns 1 or 0
 */

void jack_bauer(void)
{
	int hours;
	int min;
	int sec_1;
	int sec_2;

	for (hours = 0; hours <= 2; hours++)
	{
		for(min = 0; min <= 3; min++)
		{
			for(sec_1 = 0; sec_1 <= 5; sec_1++)
			{
				for(sec_2 = 0; sec_2 <= 9; sec_2++)
				{
					_putchar(hours + '0');
					_putchar(min + '0');
					_putchar(':');
					_putchar(sec_1 + '0');
					_putchar(sec_2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
