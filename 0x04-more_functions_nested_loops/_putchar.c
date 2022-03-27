#include <unistd.h>
/**
 * _putchar - writes c to the standard output
 * @c: char to write
 *
 * Return: On success return 1
 * On error, return 0 or -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
