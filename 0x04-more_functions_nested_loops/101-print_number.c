#include "main.h"

/**
 * print_number - prints integer numbers
 * @n: the number to print
 *
 * Return: Always 0.
 */

void print_number(int n)
{
	unsigned int k = n;

	k = n;
	if (n < 0)
	{
		n *= -1;
		k = n;
		_putchar('-');
	}
	k /= 10;
	if (k != 0)
		print_number(k);
	_putchar((unsigned int) n % 10 + '0');
}
