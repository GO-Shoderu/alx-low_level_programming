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

int _putchar(char c);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);

#endif
