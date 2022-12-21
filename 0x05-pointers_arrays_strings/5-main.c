#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);

    printf ("\n");

    char t[11] = "Holberton!";

    printf("%s\n", t);
    rev_string(t);
    printf("%s\n", t);
    
    return (0);
}
