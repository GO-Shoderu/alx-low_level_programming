#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - prints input using standard library
 * @c: The character to print
 * Return: 1 is success
 *
 * print_alphabet - prints all the alphabets in lowercase
 *
 * print_alphabet_x10 - prints all the alphabets in lowercase ten times
 *
 * File: main.h
 * Author: Gabriel Shoderu
 * A header file containing function declarations
 * These functions are initialized in the .c file
 */

void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);

#endif
