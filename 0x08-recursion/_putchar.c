#include <unistd.h>

/**
 * _putchar - writing the character c to stdout
 * @c: The element to print
 *
 * Return: On success 1.
 * error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
