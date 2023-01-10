#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
	int iter, sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (iter = 1; iter < argc; iter++)
		{
			if (atoi(argv[iter]))
				sum += atoi(argv[iter]);
			else
			{
				printf("%s\n", "Error");
				return (0);
			}
		}
		
		printf("%d\n", sum);
	}

	return (0);
}
