#ifndef variadic_functions_h
#define variadic_functions_h
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * main - entry point
 * description- headers
 * @n: number of arguments
 * Return: 0
*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
