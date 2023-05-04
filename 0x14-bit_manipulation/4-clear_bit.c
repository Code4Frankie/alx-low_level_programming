#include "main.h"

/**
 * clear_bit -to set the value of a bit to 0 at a given index.
 * @n: num  of i
 * @index: starts from 0 of the bit desired to set
 * Return: 1 if successful, or -1 if an error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = ~(1 << index);
	*n = *n & i;

	return (1);
}
