#include "main.h"

/**
<<<<<<< HEAD
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
		print_numbers();
		return (0);
}


=======
 * print_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9 followed by newline
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
>>>>>>> b70b8fa6b691e8feb3211b3b19b5b3c3f3ef8ea0
