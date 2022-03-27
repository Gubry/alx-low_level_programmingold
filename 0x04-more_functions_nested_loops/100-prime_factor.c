#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	long int prime = 612852475143;
	long int quotient = prime;
	long int divisor = 2;

	while (quotient != divisor)
	{
		if (quotient % divisor == 0)
		{
			quotient = quotient / divisor;
		}
		else
		{
			divisor++;
		}
	}
	printf("%li\n", quotient);

	return (0);
}
