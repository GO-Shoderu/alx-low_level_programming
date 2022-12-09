#include <stdio.h>

/**
 *main - This is the entry level of the project
 *This entry level is called main
 *Return: It has a return statement
*/

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	Printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	Printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	Printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}