#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << 63;
	int leading_zeros = 1;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			leading_zeros = 0;
		}
		else if (!leading_zeros)
		{
			_putchar('0');
		}

		mask >>= 1;
	}

	if (leading_zeros)
		_putchar('0');
}

