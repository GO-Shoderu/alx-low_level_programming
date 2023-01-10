#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
	argv[0] = argv[0];

	if (argc == 1)
		printf("%s\n", "Error");
	else
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	
	return (0);
}
