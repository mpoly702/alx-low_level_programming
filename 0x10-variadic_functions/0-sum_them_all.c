#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - check the code for Holberton School students.
 * @n: number of arguments
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list quarrel;
	int a, add = 0;
	unsigned int b = n;

	va_start(quarrel, n);

	while (b > 0)
	{
		a = va_arg(quarrel, int);
		add += a;
		b--;
	}
	if (n == 0)
	{
		return (0);
	}

	va_end(quarrel);
	return (add);
}
