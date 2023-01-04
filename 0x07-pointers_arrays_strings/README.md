These are the list of scripts and what they do respectively

NB: Before running any scripts please execute the command below for each respective scripts
	
	chmod u+x name_of_script
	   	- for example: chmod u+x 1-listit
		
	to compile the C programs 
		- gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c name-of-c-file.c -o name-of-c-file
	
	0-memset.c
		- this C program will fill in the first n bytes of the memory area pointed to by s with the constant byte b
		- you will need to execute the code below to test the script
			 ./0-memset
