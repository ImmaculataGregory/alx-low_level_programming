#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: number to set the bit in
 * @index: index of the bit to set
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Correction: Use bitwise left shift to set the bit */
	*n = *n | (1UL << index);

	return (1);
}

