#include "main.h"

/**
 * get_bit - Returns values of a bit at specified index in a decimal number.
 * @n: The decimal number.
 * @index: The index of the bit (0-based).
 *
 * Return: The value of bit at the given index, or -1 if index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}


