#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
	int iter;

	for (iter = 0; iter < argc; iter++)
		printf("%s\n", argv[iter]);
	
	return (0);
}
